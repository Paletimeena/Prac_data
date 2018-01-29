#!/usr/bin/python
def binary_search(lst,seek):
	first = 0
	last = len(lst)-1
	while first <= last:
		mid = first +(last-first+1)//2
		if lst[mid] == seek:
			return mid
		elif lst[mid] > seek:
			last= mid - 1
		else: 
			first = mid + 1
		return None
def display(lst,value):
	position = binary_search(lst,value)
	if position != None:
		print "Value",value,"in list found at location",position
	else :
		print "Value",value,"not in list"
	return
def main():
	a=[2,10,13,50,99,110]
	display(a,13)
	display(a,2)
	display(a,7)
	display(a,100)
	display(a,110)
main()

