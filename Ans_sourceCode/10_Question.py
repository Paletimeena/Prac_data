#!/usr/bin/python3
print("\n\n ***** Question_10 *****\n\n")
data = input("Enter two numbers: ")

numbers = [ int(i) for i in data.split(',')]

op = []
for i in range(numbers[0]):
	row = []
	for j in range(numbers[1]):
		row.append(i*j)
	op.append(row)

print("\n output: \n")
print(op)