#!/usr/bin/python
num1 = input("Please enter the 1st number\n")
num2 = input("Please enter the 2nd number\n")

rem = num1%num2
if rem == 0:
	print "Num1 is divisibal by num2!"
else:
	if num1>num2:
		sub=num2-rem
		num1+=sub
		print "We need to add %d with num1 to make num1 is divisible by num2"%(sub)
	else:
		sub=num2-num1
		num1+=sub
		print "We need to add %d with num1 to make num1 is divisible by num2"%(sub)
print "Thanks"
	
