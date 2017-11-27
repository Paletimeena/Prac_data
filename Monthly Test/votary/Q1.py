#!/usr/bin/python

def transpose(m):
	row=0
	col =0
	print m
	li=[]
	for rows in matrix:
		row = row+1
		for cols in rows:
			col = col+1
	col = col /row

	for j in range(col):
		for i in range(row):
			li.append(matrix[i][j])
		
	

	matrix1= [[0 for row1 in range(row)] for cols in range(col)]
	i=0
	while(i<len(li)):
		for col1 in range(col):
			for row1 in range(row):			
				matrix1[col1][row1] = li[i]
				i = i+1
			
		
	return matrix1
			

matrix = [[1,3,5],[2,4,6],[7,8,9]]

matrix1=transpose(matrix)
print "final output " ,matrix1