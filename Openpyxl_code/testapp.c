#include <stdio.h>
#include<json/json.h>
#include<string.h>
//#include"header_app.h"
#include"VITA_DM.h"

uint32_t VITA_DM_Init(void);
uint32_t VITA_DM_Discover(disc_ptr callback);
void VITA_DM_Get(const char *handle, onGet_ptr callback);
void VITA_DM_Put(const char *handle, json_object *obj);
void VITA_DM_Observe(const char *handle, onobserve_ptr callback, int32_t start_stop);

void user_discover_callback(Resource_info*);
void user_get_callback(handle_t, json_object*);
//void user_put_callback(handle_t, json_object*);
void user_observe_callback(handle_t, json_object*);
void put_data(void * inputHandle, char newstr[], char ch[], int i, char s[]);

typedef struct node {
    Resource_info *res;
    struct node *next;
}listNode;

listNode *header = NULL;
//json_object* get_local;// = json_object_new_object();

void user_discover_callback(Resource_info* res_info) {
    listNode *local_node= header;

    listNode *travel_list;
    listNode *new_node;
    travel_list = header;
    while(travel_list != NULL) {
        if(strcmp(travel_list->res->name, res_info->name)==0) {
        /*    printf("****************************************************\n");
            printf("Resource name: %s\n",travel_list->res->name);
            printf("Resource handle: %p \n",travel_list->res->handle);
            printf("****************************************************\n\n");
	*/  mysql_Insert_Discover(travel_list->res->name, travel_list->res->handle);
            return;
        }
        else {
            // printf("comparision else in app level %s,%s========>AAAAAAAAAAAAAAAA\n",res_info->name,travel_list->res->name);
            travel_list = travel_list->next;
        }
    }
    if(strcmp(res_info->name,"/oic/p")==0
            || strcmp(res_info->name,"/oic/d")==0
            ||strcmp(res_info->name,"/oic/sec/doxm")==0
            ||strcmp(res_info->name,"/oic/sec/pstat")==0 ) {
        return;
    }
    new_node = (listNode *)malloc(sizeof(listNode));
    new_node->res = res_info;
    new_node->next = NULL;

    /*printf("****************************************************\n");
    printf("Resource name: %s\n",new_node->res->name);
    printf("Resource handle: %p \n",new_node->res->handle);
    printf("****************************************************\n\n");
    */mysql_Insert_Discover(new_node->res->name, new_node->res->handle);

    if(local_node == NULL) {
        header = new_node;
    }
    else {
        while(local_node->next != NULL) {
            local_node = local_node->next;
        }
        local_node->next = new_node;
    }
  //printf("\t\t\t\tDiscover Wait......\n");
 //sleep(15);
//printf("\t\t\t\tDiscover Wait......End\n");
    return ;
}

void user_get_callback(handle_t handle, json_object* jsonObj)
{
	char buff[1200],*ptr;
    //printf("\t\t\tin get**: %s --> %p\n", handle, handle);
    json_object_object_foreach(jsonObj, key, val)
    {
       // printf("**Key :%s\t",key);
        switch(json_object_get_type(val))
        {
        case json_type_boolean: //printf("value type: boolean value: %s\n", json_object_get_boolean(val)? "true": "false");
		sprintf(buff,"%s", json_object_get_boolean(val)? "true":"false");
            break;
        case json_type_int: //printf("value type: integer value:%d\n",json_object_get_int(val));
		sprintf(buff,"%d", json_object_get_int(val));
            break;
        case json_type_string://printf("value type: string value:%s\n",json_object_get_string(val));
			strcpy(buff,json_object_get_string(val));
			ptr=strchr(buff,39);
			if(ptr!=NULL)
				*(buff+(ptr-buff))='-';
			else
				strcpy(buff,json_object_get_string(val));
            break;
        case json_type_double: printf("value type: double value: %lf\n", json_object_get_double(val));
            break;
        case json_type_object: printf("value type: json_type_object value\n");
            break;
        case json_type_array: printf("value type: json_type_array value\n ");
            break;
        case json_type_null: printf("value type: Null value\n ");
            break;
        }
	mysql_Insert_Get(handle,key,buff);
    }
}

void put_data(void * inputHandle, char newstr[], char ch[], int i, char s[])
{
	json_object* put_local;
	put_local = json_object_new_object();
	printf(" hanle : %s key : %s valuetype : %s int %d string %s\n",inputHandle,newstr,ch, i,s);
	switch(ch[0])
	{
		case 'i': 
			json_object_object_add(put_local, newstr, json_object_new_int(i));
			break;
		case 's':
			json_object_object_add(put_local, newstr, json_object_new_string(s));
			break;
		case 'b':
			json_object_object_add(put_local, newstr, json_object_new_boolean(i));
			break;
	}	
	
	VITA_DM_Put(inputHandle, put_local);
	
}

void user_observe_callback(handle_t handle, json_object* jsonObj)
{
	char buff[1200],*ptr;
    printf("handle in app:%p\n",handle);
    json_object_object_foreach(jsonObj, key, val)
    {
        printf("Key :%s\t\t",key);
        switch(json_object_get_type(val))
        {
        case json_type_boolean: // printf("boolean value: %s\n", json_object_get_boolean(val)? "true": "false");
		sprintf(buff,"%s", json_object_get_boolean(val)? "true":"false");
                break;
        case json_type_int:// printf("integer value:%d\n",json_object_get_int(val));
		sprintf(buff,"%d", json_object_get_int(val));
                break;
        case json_type_string:// printf("string value:%s\n",json_object_get_string(val));
			strcpy(buff,json_object_get_string(val));
			ptr=strchr(buff,39);
			if(ptr!=NULL)
				*(buff+(ptr-buff))='-';
			else
				strcpy(buff,json_object_get_string(val));
            break;
        case json_type_double: //printf("double value: %lf\n", json_object_get_double(val));
            break;
        case json_type_object: printf("json_type_object value\n");
            break;
        case json_type_array: printf("json_type_array value\n ");
            break;
        case json_type_null: printf("Null value\n ");
            break;
        }
	mysql_Insert_Observe(handle,key,buff);
    }
}


void user_delete_callback(handle_t h) {
if(h)
{
        printf("Resource Deleted Successfully\n");
      	mysql_Delete_Resource(h);
}
    return;
}


























/*
int main(void)
{
    int init_res;
    int i;
    int length;
    char s[40];
    char inputString[40], newstr[40];
    char inputHandle[40];
    listNode *handleOut = NULL;
    listNode *temp_header = NULL;
    listNode * delete_temp = NULL;
    json_object *get_local; //= json_object_new_object();
    init_res = VITA_DM_Init();

    memset(newstr,0,40);
    memset(inputString,0,40);
    memset(inputHandle,0,40);
    printf("Plese select the options:\n");
    printf("Discover  :  d\tGET  :  g\tPUT  :  p\tOBSERVE  :  o\tCANCEL_OBSERVE  :  c\tPRINT_LIST  :  l\t");
    printf("DELETE  :  r\t Terminate : t\n");
    while(1) {
        gets(inputString);
        switch (inputString[0]) {
        case 'd':
            temp_header = header;
            while (temp_header != NULL)
            {
                delete_temp = temp_header;
                temp_header = temp_header->next;
                free(delete_temp);
            }
            header = NULL;

            VITA_DM_Discover(user_discover_callback);
            break;
        case 'g':
            printf("Eneter a handle to read the data of resource:\n");
            gets(inputHandle);//scanf("%s",inputHandle);//
            handleOut = selection(inputHandle);
            if(handleOut != NULL) {
                VITA_DM_Get(inputHandle, user_get_callback);
            }
            else {
                printf("Wrong Handle...BYE\n");
            }
            break;
        case 'p':
            printf("Eneter a handle of resource:\n");
            gets(inputHandle);//scanf("%s",inputHandle);//
            handleOut = selection(inputHandle);
            if(handleOut == NULL) {
                printf("WRONG HANDLE...........BYE\n");
            }
            else {
                char ch;
                get_local = json_object_new_object();
                printf("Enter the attribute key you want to modify:\n");
                gets(newstr);
                printf("Enter the type of Value you want to write\n");
                printf("'i' for int\t's' for string\t'b'\n");
                scanf("%c",&ch);
                switch(ch)
                {
                case 'i': printf("enter integer value\n");
                    scanf("%d",&i);
                    json_object_object_add(get_local, newstr, json_object_new_int(i));
                    break;
                case 's': printf("enter string value\n");
                    gets(s);
                    gets(s);
                    json_object_object_add(get_local, newstr, json_object_new_string(s));
                    break;
                case 'b': printf("Enter boolean value as '0' or '1'\n");
                    scanf("%d",&i);
                    json_object_object_add(get_local, newstr, json_object_new_boolean(i));
                    break;
                }

                VITA_DM_Put(inputHandle, get_local);
                json_object_put(get_local);
                printf("PUT SUCCESS\n");
            }
            break;
        case 'o':
            printf("Eneter a handle of resource:\n");
            gets(inputHandle);//scanf("%s",inputHandle);//
            handleOut = selection(inputHandle);
            if(handleOut == NULL) {
                printf("WRONG HANDLE...........BYE\n");
            }
            else {
                VITA_DM_Observe(inputHandle, user_observe_callback, 0);
            }
            break;
        case 'c':
            printf("Eneter a handle of resource:\n");
            gets(inputHandle);//scanf("%s",inputHandle);//
            handleOut = selection(inputHandle);
            if(handleOut == NULL) {
                printf("WRONG HANDLE...........BYE\n");
            }
            else {
                VITA_DM_Observe(inputHandle, user_observe_callback, 1);
            }
            break;
        case 'r':
            printf("Eneter a handle of resource:\n");
            gets(inputHandle);//scanf("%s",inputHandle);//gets(inputHandle);
            handleOut = selection(inputHandle);
            if(handleOut == NULL) {
                printf("WRONG HANDLE...........BYE\n");
            }
            else {
                VITA_DM_Delete(inputHandle, user_delete_callback);
            }
            break;
        case 'l':
            print_list();
            break;
        case 't':
            VITA_DM_Terminate();
        default:
            printf("Please enter a correct option \n");
            break;
        }
    }
    return 0;
}
*/
