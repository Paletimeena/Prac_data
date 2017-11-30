#!/usr/bin/python3
from collections import Counter
print("\n\n ***** Question_5 *****\n\n")
# data = input("Enter the data: ")
data = "New to Python or choosing between Python 2 and Python 3? Read Python 2 or Python 3."

temp = Counter(data.split(" "))

keys = sorted(temp.keys())

for val in keys:
	print("{}:{}".format(val, temp[val]))