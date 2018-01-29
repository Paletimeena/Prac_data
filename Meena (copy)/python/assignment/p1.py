#!/usr/bin/python
import math
binv='0b0100100'
octv='021'
hexv='0x50'
decv='555'
print int(binv,2)
print int(octv,8)
print int(hexv,16)
print int(decv,10)
print "\n"
print long(binv,2)
print long(octv,8)
print long(hexv,16)
print long(decv,10)
print "\n"
inttoflt = input("enter number\n")
print float(inttoflt)
print "\n"
x=input()
y=input()
z=input()
y=str(x)+str(y)+str(z)
print y
name=raw_input("enter ur name\n")
print name[0],ord(name[0])
print name[1],ord(name[1])
print name[2],ord(name[2])
print name[3],ord(name[3])
print name[4],ord(name[4])
print "\n"
char=input("enter the value between 65 to 95\n");
print chr(char)
#print name[0],ord(name[0])
print "\n"

x=input("enter dec value\n")
print int(x)
print oct(x)
print hex(x)
print bin(x)


x=input("enter oct value\n")
print int(x)
print oct(x)
print hex(x)
print bin(x)

x=input("enter bin value\n")
print int(x)
print oct(x)
print hex(x)
print bin(x)
x=input("enter hex value\n")
print int(x)
print oct(x)
print hex(x)
print bin(x)

x=input("enter dec value\n")
print oct(bin(x))
