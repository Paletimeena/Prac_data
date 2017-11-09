#!/usr/bin/python

import os,time,mysql_py,sys, fileop
from ctypes import *
import time

localtime = time.asctime( time.localtime(time.time()) )
print "Script Start at :", localtime

os.chdir('/home/chaturah/Desktop/DM_Executable_june_14_2017')
var=sys.argv
lis=var[2:]
Discover_List=[]
Exception_list = [StopIteration, SystemExit, StandardError,ArithmeticError,OverflowError,FloatingPointError,ZeroDivisionError]
print "\n"
print "Going to Test ",lis
print "pass file ", fileop.fp
print "fail file ", fileop.ff

fun = CDLL("./testapp.so")
#fp = open("pass_test.log", "a+")
def Fail(case):
	if fileop.ff != 0:
		fileop.ff.write("Fail --->  " + str(case) + "\t\t" + str(time.asctime( time.localtime(time.time()))) + "\n\n")

def Pass(case):
	if fileop.fp != 0:
		fileop.fp.write("Pass --->  " + str(case) + "\t\t" + str(time.asctime( time.localtime(time.time()))) + "\n\n")

def call_init(index):
	loop = int(lis[index+1])
	#fun.mysql_Connect()
	for number in range(loop):
		if lis[index]=="init":
			print "\n..................initilizing .................\n"
			fun.VITA_DM_Init()
		else:
			print ".................wrong Entry  ................."
			sys.exit(0)

	
def call_discover(index):
	loop = int(lis[index+1])
	print "lengh: ", loop
	for number in range(loop):
		if lis[index]=="discover":
			print "Delete All Tables before Discovering Devices ", number
	
			mysql_py.mysql_Truncate_Table("DM_Discover")
	
			mysql_py.mysql_Truncate_Table("DM_GET")
		
			mysql_py.mysql_Truncate_Table("DM_Observe")		
	
			#time.sleep(3)
			fun.VITA_DM_Discover(fun.user_discover_callback);
			time.sleep(3)
			Discover_List = mysql_py.mysql_Fetch_Discover()
			time.sleep(2)
			

		else:
			print "..................wrong discover called ................."
			sys.exit(0)

	if len(Discover_List) > 0:
		pass
	else:
		Fail(var[1])					
        	raise Exception('Resources not found ' + str(lis))

def call_get(index):
	loop = int(lis[index+1])
	for number in range(loop):
		if lis[index]=="get":
			print "\n..................Going to GET Device Information..............."
			mysql_py.mysql_Truncate_Table("DM_GET")	
			#time.sleep(3)
			#print "Available Devices for GET"		
			Discover_List = mysql_py.mysql_Fetch_Discover()
			if len(Discover_List) > 0 :
			    for inputHandle in Discover_List:

			#	inputHandle = raw_input("input handle to get data : ")
			#	print "GET the device Information for Handle: ",inputHandle
			#	time.sleep(10)
				fun.VITA_DM_Get(inputHandle,fun.user_get_callback)	
				time.sleep(5)
		        	mysql_py.mysql_Fetch_Handle("DM_GET",inputHandle)
			#	time.sleep(5)
			else :
				Fail(var[1])
				raise Exception("Error:No resource found for getting device info")
		else:
			
			print "..................wrong get  called ................."
			sys.exit(0)

def call_put(index):
	loop = int(lis[index+1])
	Put_fail = []
	for number in range(loop):
		if lis[index]=="put":
			print "*************************************"
			print "             PUT DATA                "
			print "*************************************"
			
			test = True
			Discover_List = mysql_py.mysql_Fetch_Discover()
			if len(Discover_List) > 0:
			   for inputHandle in Discover_List:
				print "DM_GET before PUT for Handle : ",inputHandle		
			     	mysql_py.mysql_Fetch_Handle("DM_GET",inputHandle)	
				print "........................................."
				print "Putting data for handle : ",inputHandle
				key = "power"
				valuetype = "i"
				value = mysql_py.mysql_fetech_value(inputHandle)
				print "change",key,"=",value,"to",key,"=",value + 50
				value = value + 50
				#print "type ", type(value)
				#value=0
				fun.put_data(inputHandle, key, valuetype, value, "NULL")
				time.sleep(3)
				mysql_py.mysql_Delete_Handle("DM_GET",inputHandle)
				time.sleep(2)
				fun.VITA_DM_Get(inputHandle,fun.user_get_callback)
				time.sleep(4)
				print "DM_GET after PUT for Handle :",inputHandle			
				key_val = mysql_py.mysql_Fetch_Handle("DM_GET",inputHandle)
				if(int(key_val) == value) :
					pass
				else:
					Put_fail.append(inputHandle)
					test = False
				time.sleep(2)
			   if(test):
				  print "put sucess on all resources"
			   else:
				  Fail(var[1])
				  print "put failed on ", Put_fail
				  raise Exception("put failed on resources" + str(lis))	
				  	
			else:
				Fail(var[1])
				raise Exception("No Resource found to put" + str(lis))	
		else:
			print "..................wrong get  called ................."
			VITA_TL_Send(W_Put)
			sys.exit(0)
			
def call_observe(index):
	loop = int(lis[index+1])
	print "************************************"
	print "            Observe called      "
	print "************************************"
	mysql_py.mysql_Truncate_Table("DM_Observe")
	for number in range(loop):
		if lis[index]=="observe":
			Discover_List = mysql_py.mysql_Fetch_Discover()
			if len(Discover_List) > 0 :
			   for inputHandle in Discover_List:
				#mysql_py.mysql_Delet_old_Observe(inputHandle)
				#time.sleep(10)				
				print "\n observe called for Handle :",inputHandle
				fun.VITA_DM_Observe(inputHandle, fun.user_observe_callback, 0)
				time.sleep(3)
				mysql_py.mysql_Fetch_Handle("DM_Observe",inputHandle)
			else :
				Fail(var[1])
				raise Exception("No resources for observe" + str(lis))	
		else:
			print "..................wrong observe  called ................."
			VITA_TL_Send(W_Observe)
			sys.exit(0)

#delete for automation only we are deleting index 0 handle
def call_delete(index):
	loop = int(lis[index+1])
	for number in range(loop):
		Discover_List = mysql_py.mysql_Fetch_Discover()
		if len(Discover_List) > 0:
		#	index = input("enter the Resource handle number to  delete :  ")
			print "delete called for Handle: ", Discover_List[0]
			handle = Discover_List[0]
                	fun.VITA_DM_Delete(Discover_List[0], fun.user_delete_callback)
			time.sleep(5)
			Discover_List = mysql_py.mysql_Fetch_Discover()
			time.sleep(3)
			if handle not in Discover_List:
        			print "Handle deleted successfuly : ", handle
    			else:
				Fail(var[1])
        			raise Exception('handle ' + handle + ' not Deleted in ' + str(lis))
		else:
        		raise Exception('Error: there is no resource available to delete' + str(lis))
			

for index in range(0,len(lis),2):	
	if(lis[index]=="init" or lis[index]=="w_init"):   	   # init	
		if index == 0:                      		   #connect to mysql database
			print "\nconnecting to mysql database\n"
			fun.mysql_Connect()

		call_init(index)


	elif(lis[index]=="discover" or lis[index]=="w_discover"):   # discover
		call_discover(index)
		#time.sleep(20)

	elif(lis[index]=="get" or lis[index]=="w_get"):             # get
		call_get(index)

	elif lis[index]=="put" or lis[index]=="w_put":              # put
		call_put(index)

	elif lis[index]=="observe" or lis[index]=="w_observe":      # observe
		call_observe(index)

	elif lis[index]=="delete" or lis[index]=="w_delete":        # delete
		call_delete(index)

if (len(lis) == index+2):
		print "\nDisconnecting from mysql database****\n"       # disconnect from mysql database
		Pass(var[1])
		fun.mysql_Disconnect
fileop.fp.close()
fileop.ff.close()
endtime = time.asctime( time.localtime(time.time()) )
print "Script End at :", endtime
	
