#!/usr/bin/python3
print("\n\n ***** Question_9 *****\n\n")
# data = "hello world and practice makes perfect and hello world again"
data = input("Enter the data: ")

uniq_data = list(set(data.split(" ")))

op = " ".join(sorted(uniq_data))

print("\nOutput: \n")

print(op)