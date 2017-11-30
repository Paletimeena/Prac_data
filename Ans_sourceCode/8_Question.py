#!/usr/bin/python3
print("\n\n ***** Question_8 *****\n\n")
data = input("Enter binary numbers: ")

bin_numbers = data.split(",")

for number in bin_numbers:
	if int(number, 2)%5 == 0:
		print(number)

