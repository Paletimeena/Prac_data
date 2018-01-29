#!/usr/bin/python
import modules as e
import sys
print sys.argv
inputs=sys.argv[1:]
print inputs
num=int(inputs[0])
e.prime_or_not(num)
try:
	start=int(inputs[1])
	end=int(inputs[2])
	ls=e.lst_of_primes(start,end)
	Ts=e.tuple_of_primes(start,end)

except :
	
	ls=e.lst_of_primes(1,100)
	Ts=e.tuple_of_primes(50,200)

for val in ls:
        print val,

print ""
for val in Ts:
        print val,

