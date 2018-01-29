#!/usr/bin/python
def locate(lst,seek):
	for i in range(len(lst)):
		if lst[i] == seek:
			return i
	return None
def display(lst,value):
	position = locate(lst,value)
	if position != None:
		print "Value",value,"in list found at location",position
	else :
		print "Value",value,"not in list"
	return
def main():
	a=[100,44,2,80,5,13,11,2,110]
	display(a,13)
	display(a,2)
	display(a,7)
	display(a,100)
	display(a,110)
main()
