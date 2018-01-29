#!/usr/bin/python
number=23
running=True
while running:
	guess=int(raw_input("Please enter the integer number:"))
	if guess==number:
		print"Congratulation, you got it."
		running=False
	elif guess<number:
		print"No, it is little bit small."
	else:
		print"No, it is little bit big."
