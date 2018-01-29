#!/usr/bin/python
#Basic program of control statment.
number = 23
guess = int(raw_input("enter an integer:"))
if number==guess:
	print "Congratulation,you guessed it"
	print '(Rgit nuber!)'
elif number<guess:
	print "number, it's a little higher than that"
else:
	print "number, it's a little lower than that"
