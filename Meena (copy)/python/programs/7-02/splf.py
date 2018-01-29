#!/usr/bin/python
fact=1
y=input("enter the number")
for x in range(2,y+1):
	#print x,"x value is"
	for j in range(1,1+x):
		fact *=j
	print j,"factorial is",fact
	if (fact%y==0):
		print fact,"is divisable by",y
		print "otput is ",j
		break		
	fact=1
