#!/usr/bin/python
num=input("Please enter the number between 0 to 100\n")
#else if ladder
if ((num<50)and(num>0)):
	print "Grade is B20"
elif ((num<70)and(num>=50)):
	print "Grade is N50"
elif ((num<80)and(num>=70)):
	print "Grade is T20"
elif ((num<=100)and(num>=80)):
	print "Grade is T10"
else :
	print "Please enter the proper number"
print "Thank\nGood bye\n"



