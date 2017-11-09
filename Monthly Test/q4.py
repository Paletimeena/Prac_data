#!/usr/bin/python

n= input("enter non negative number\n")
l=input("enter l value \n")
r = input("enter r value\n")

#var = ((1<<(l-1)) ^ (1<<(r-1)))
a=0
for index in range(l-1,r):
		a=a ^ (1<<index)

res = n | a 

print res