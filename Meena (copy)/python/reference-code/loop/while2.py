#!/usr/bin/python
val1_start=1
val1_end=2#modify to 3 and change code
val2_start=1
val2_end=11
while val1_start<val1_end:
	while val2_start<val2_end:
		print "%d%d"%(val1_start,val2_start)
		val2_start= val2_start + 1
	else:
		print"End of the inner loop"
	val1_start=val1_start+1
else:
	print"End of the outer loop"
print"End of the loop"
