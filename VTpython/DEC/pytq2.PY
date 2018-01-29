#!/usr/bin/pyhton


num=input("enter num: ")
left=input("enter left value: ")
right=input("enter right value :")
right=right+1
a=1
for i in range(left,right):
	a=a<<1
	num= num | a
print num
