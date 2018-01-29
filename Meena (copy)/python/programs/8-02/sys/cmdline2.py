import sys
print "the command line arguments are"
total_sum=''
total_nums=len(sys.argv)
for index in range(1,total_nums):
	num=(sys.argv[index])
	(total_sum) += num
print total_sum
