#!/usr/bin/python
#Basic tset progam of tuple.

mytuple = (10,20,(30,50,40),60,70)
mylist= list(mytuple)
mylist[1]=[1,2]
mylist[1][0]=10
mylist[2][0]=10
print mylist
mytuple =tuple(mylist)
print mytuple

