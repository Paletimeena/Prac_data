#!/usr/bin/python
lis1=[]
lis2=[]
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
		lis2.append(val)
		lis1.insert(index,0)
		print lis1
	#	lis1.append(val)
#lis1=set(lis1)
for i in lis1:
	if(i ==0):
		lis1.remove(i)
print "final ",lis1,"\n",lis2
lis1=lis1+lis2
print "\n",lis1
