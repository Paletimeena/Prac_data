#!/usr/bin/python

import os,sys

def reverse(string):
	return string[::-1]

def Ispalndrome(string):
	string_rev=reverse(string)
	
	if (string==string_rev):
		return True
	else:
		return False

"""
res=Ispalndrome("ameema")
if res==1:
	print "palndrome"
else:
	print "not a plandrome"
"""

string=sys.argv[1]
pallist=[]
for i in range(0,len(string)+1):
	for j in range(i+2,len(string)+1):
		str1=string[i:j]
		res=Ispalndrome(str1)
		
		if res==1:
			#print str1,"is a palndrome"
			pallist.append(str1)
		else:
			#print str1,"is not a plandrome"
			continue



print "Output:{}".format(len(pallist))
print pallist




