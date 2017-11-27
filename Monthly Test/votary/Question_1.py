#!/usr/bin/python
import numpy as np

def transpose(matrix):
	mat = np.array(matrix)
	return mat.transpose()

if __name__ == "__main__":
	print("EX:1 => transpose([[1, 4, 9]])")
	print(transpose([[1, 4, 9]]))
	print()
	print("EX:2 => transpose([[1, 3, 5], [2, 4, 6]])")
	print(transpose([[1, 3, 5], [2, 4, 6]]))
	print()
	print("Ex:3 => transpose([[1, 1, 1], [2, 2, 2], [3, 3, 3]])")
	print(transpose([[1, 1, 1], [2, 2, 2], [3, 3, 3]]))
	 
