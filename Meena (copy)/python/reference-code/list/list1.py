#!/usr/bin/python
#Basic program of list.

str = "Hello India"
mylist = [10, 20, 30, "RAj",50]
mytinylist = [15,25, "Aman"]
print str
print mylist
print mytinylist
print mylist[0]
print mylist[:5]
print mylist[5:]
print mylist[3:]
print mylist[2:4]
print mylist[-1]
print mylist * 2
print mylist + mytinylist
mylist[4] = 40
#mylist[6] = 60 # Given error
print mylist
print mylist[1:5:2]
print mylist[1::2]
print mylist[::]
print mylist[1::]
print mylist[::3]
print mylist[:5:]
print mylist[5:1:-1]  #it's print in reverse order
print mylist[-2:-5:-1]
print "Thanks"

