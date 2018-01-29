#!/usr/bin/python
i=2
while(i<100):
	j=2
	while(j<(i/j)):
		if not(i%j):break
		j=j+1
		print "j value is",j
	if(j>i/j): print i,"is prime"
	i=i+1
	print "i value is",i
print "good bye`"
