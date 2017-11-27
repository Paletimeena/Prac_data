#!/usr/bin/python
def frequency(lst):
	output = [[], []]
	min_freq = min(lst, key=lst.count)
	output[0].append(min_freq)
	max_freq = max(lst, key=lst.count)
	output[1].append(max_freq)
	for val in lst:
		if val not in output[0] and val not in output[1]:
			if lst.count(min_freq) == lst.count(val):
				output[0].append(val)
			elif lst.count(max_freq) == lst.count(val):
				output[1].append(val)

	return output

lst1 = [13, 12, 11, 13, 14, 13, 7, 11, 13, 14, 12]
lst2 = [13, 12, 11, 13, 14, 13, 7, 11, 13, 14, 12, 14, 14]
lst3 = [13, 12, 11, 13, 14, 13, 7, 11, 13, 14, 12, 14, 14, 7]

if __name__ == "__main__":
	print("Ex:1 => {}".format(lst1))+
	print(frequency(lst1))
	print("EX:2 => {}".format(lst2))
	print(frequency(lst2))
	print("EX:3 => {}".format(lst3))
	print(frequency(lst3))
