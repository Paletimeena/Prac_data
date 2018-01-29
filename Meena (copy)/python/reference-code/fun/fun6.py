#!/usr/bin/python
# Function defination here

def changeme(mytuple):
	"This is call by refrence"
	mytuple=(20,40,60) 
	print "Value inside the function: ",mytuple
	return
def changeme(str):
	"This is call by refrence"
	str="RAJ CHATURVEDI" 
	print "string inside the function: ",str
	return
#Now you can call the function
mytuple=(10,20,30)
changeme(mytuple)
print "Value outside the function: ",mytuple
str="RAHUL CHATURVEDI"
changeme(str)
print "string outside the function: ",str















