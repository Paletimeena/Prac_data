#!/usr/bin/python
lis1=[]
#lis2=[]
#lis3=[]
num=input("enter the num of list\n")
while(num !=0):
	lis1.append(num)
	num=input("enter the num of list\n")
print lis1
length=len(lis1)
for index in range(length-1):
	if(lis1[index]<0):
		print lis1[index]
		val=lis1.pop(index)
		print lis1
		lis1.append(val)
print "final ",lis1
