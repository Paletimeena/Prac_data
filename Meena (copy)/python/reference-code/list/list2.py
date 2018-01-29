#!/usr/bin/python
#Basic program of list.

list1 = [10, 20, 30, "RAj",50]
list2 = [5,25, "Aman"]
print "1 ",cmp(list1, list2)
print "2 ",cmp(list2, list1)
print
list1 = [65,75,85]
list2 = ["Abc"]
print "3 ", cmp(list1, list2)
print "4 ",cmp(list2, list1)
print
list1 = [65]
list2 = ['A']
print "4 ", cmp(list1, list2)
print "5 ", cmp(list2, list1)
print
list1 = [65,75,85]
list2 = ['A','B','C']
print "3 ", cmp(list1, list2)
print "4 ",cmp(list2, list1)
print
list4 = [15, 20, 30, "RAj",50]
list5 = [15,25, "Aman"]
print "5 ",cmp(list4,list5) 
print "6 ",cmp(list5,list4)
print 
list3 = list2 +[786]
print cmp(list2,list3) 
print
tuple = (123,"xyz","Zara","abc")
alist = list(tuple)
alist[0]+=1
print "Alist is : ",alist
print "Thanks"

