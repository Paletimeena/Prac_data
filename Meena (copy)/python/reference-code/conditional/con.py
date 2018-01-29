#!/usr/bin/python
str1= raw_input("Please enter the Location name\n")

if str1 == "gachibowli":
	print "welcome to Votary Tech-Engineering Team"
elif str1 == "banjarahills":
	print "welcome to Votary Tech-LC,Gachibowli!"
else:
	print "It's not a correct location please enter again!"

empid=raw_input("please enter the employee id\n")
if((empid[0]=='v')and(empid[1]=='t')):
	print "Welcome to Votary Tech, your employee ID is ",empid
elif((empid[0]=='V')and(empid[1]=='T')):
	print "Welcome to Votary Tech, your employee ID is ",empid
else:
	print "Welcome to Votary Tech,your employee ID would be created shortly"
print "Thanks\nGood bye"		
