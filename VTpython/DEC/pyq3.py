#!/usr/bin/python

ls=[]
flag=1
print "enter list of numbers:"
while(flag != 0):
	num=input("")
	if(num==0):
		flag=0
		break;
	else:
		ls.append(num)


print ls
length=len(ls)
nls=[]
pls=[]

for i in ls:
	if(i < 0):
		nls.append(i)
	else:
		pls.append(i)
print pls+nls
