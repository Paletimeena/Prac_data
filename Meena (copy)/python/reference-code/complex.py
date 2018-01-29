#!/usr/bin/python
cn1=complex(raw_input("Please enter the complex number\n"))
cn2=complex(raw_input("Please enter the complex number\n"))
print "Real part of cn1 is",cn1.real
print "imaginary part of cn1 is",cn1.imag
print "complex form of cn1 is",cn1

print "Real part of cn2 is",cn2.real
print "imaginary part of cn2 is",cn2.imag
print "complex form of cn2 is",cn2

add=cn1+cn2
sub=cn1-cn2
mul=cn1*cn2

print"Addition is ",complex(add)
print"subtraction is ",complex(sub)
print"multipication is ",complex(mul)

cn3=cn1
cn4=cn2

print "Real part of cn3 is",cn3.real
print "imaginary part of cn3 is",cn3.imag
print "complex form of cn3 is",cn3

print "Real part of cn4 is",cn4.real
print "imaginary part of cn4 is",cn4.imag
print "complex form of cn4 is",cn4

add=cn3+cn4
sub=cn3-cn4
mul=cn3*cn4

print"Addition is ",add
print"subtraction is ",sub
print"multipication is ",mul

num= int(raw_input("Please enter the number\n"))
res= cn1+num
print "Addition of complex number and integer number is ",res
res= cn2+num
print "Addition of complex number and integer number is ",res
res= cn3+num
print "Addition of complex number and integer number is ",res
res= cn4+num
print "Addition of complex number and integer number is ",res


num= int(raw_input("Please enter the number\n"))
res= cn1-num
print "subtraction of complex number and integer number is ",res
res= cn2-num
print "subtraction of complex number and integer number is ",res
res= cn3-num
print "subtraction of complex number and integer number is ",res
res= cn4-num
print "subtraction of complex number and integer number is ",res


num= int(raw_input("Please enter the number\n"))
res= cn1*num
print "multipication of complex number and integer number is ",res
res= cn2*num
print "multipication of complex number and integer number is ",res
res= cn3*num
print "multipication of complex number and integer number is ",res
res= cn4*num
print "multipication of complex number and integer number is ",res

print "End of the program\nThanks"
