#!/usr/bin/python
def total(initial=5,*num,**keyword):
	count=initial
	for number in num:
		count += number
	for key in keyword:
		count+=keyword[key]	
	return count
print total(0,1,2,3,vegitable=50,fruits=100)
#print total(0,1,2,3,{'vegitable':50,'fruits':100})
