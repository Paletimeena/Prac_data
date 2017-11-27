#!/usr/bin/python
def valley(lst):
	if len(lst) %2 == 0 or len(lst) < 3:
		return False

	else:
		mid_index = (len(lst)/2)
		if lst[:mid_index] == list(reversed(lst[mid_index+1:])):
			if all((lst[mid_index] < ele) for ele in lst[:mid_index]):
				return True
			else:
				return False
		else:
			return False

lst_1 = [3, 2, 1, 2, 3] #True
lst_2 = [3, 2,1] #False
lst_3 = [3, 3, 2, 1, 2] # False
lst_4 = [5, 4, 2, 1, 2, 4, 5] #True
lst_5 = [2, 1, 2] #True
lst_6 = [11, 9, 4, 3, 1, 3, 4, 9, 11] # True
lst_7 = [11, 9, 4, 3, 1, 4, 3, 9, 11] # True

if __name__ == "__main__":
	print("Ex:1 {}".format(lst_1))
	print(valley(lst_1))
	print("Ex:2 {}".format(lst_2))
	print(valley(lst_2))
	print("Ex:3 {}".format(lst_3))
	print(valley(lst_3))
	print("Ex:4 {}".format(lst_4))
	print(valley(lst_4))
	print("Ex:5 {}".format(lst_5))
	print(valley(lst_5))
	print("Ex:6 {}".format(lst_6))
	print(valley(lst_6))
	print("Ex:7 {}".format(lst_7))
	print(valley(lst_7))

