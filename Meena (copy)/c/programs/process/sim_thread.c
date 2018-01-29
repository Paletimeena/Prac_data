#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#define NUM 100
long long sum =0;
pthread_mutex_t mux = PTHREAD_MUTEX_INITIALIZER;

void *thread(void *arg)
{
	int i,off = *(int *)arg;
	pthread_mutex_lock(&mux);
	for(i = 0 ; i < NUM ; i++)
	{
		printf("thread %d sum %d\n",off,sum);
		sleep(3);
		sum += off;	
	}
	pthread_mutex_unlock(&mux);
}
void *thread1(void *c)
{
	sleep(0.5);
	int i=0, a= *(int *)c;
	while(1)
	{
		printf("second 3 %d\n",i);
		if(i==100)
			break;
		i++;
	}
}
int main()
{
	int off = 1;
	
	pthread_t id1;

	int off2 = -1;

	pthread_t id2;
	pthread_create(&id1,NULL,thread,(void *)&off);
	pthread_create(&id2,NULL,thread,(void *)&off2);
	pthread_t id3;
	pthread_create(&id3,NULL,thread1,(void *)&off);
	pthread_join(id1,NULL);
	pthread_join(id2,NULL);
	pthread_join(id3,NULL);

//	while(1); 
		
	printf(" cdy vgtrgn sum %lld\n",sum);
//	pthread_exit(NULL);
} 		
