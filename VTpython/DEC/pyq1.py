#!/usr/bin/pyhton

def Ascending_pnum(num):
	
	if(num>0):
		print num,
		num=num-1
		Ascending_pnum(num)
def Descending_pnum(num):
	
	if(num>0):
		num=num-1
		Descending_pnum(num)
		print num+1,

num=input("Enter Number : \n")
print "Ascending Number : "
Ascending_pnum(num)
print "\nDescending Number : "
Descending_pnum(num)

