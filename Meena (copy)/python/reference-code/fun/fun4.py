#!/usr/bin/python
# Function defination here

def changeme(mylist):
	"This is call by value" 
	mylist=[1,2,3,4]
	print "Value inside the function: ",mylist
	return
#Now you can call the function
mylist=[10,20,30]
changeme(mylist)
print "Value outside the function: ",mylist















