#!usr/bin/python
def power(list1,num):
	for index in range(len(list1)):
		list1[index]=list1[index]**num
	#return list1
num=input("enter the num")
mylist=[1,2,3,4,5]
if num>5:
	num=5
newlist=power(mylist,num)
print newlist
