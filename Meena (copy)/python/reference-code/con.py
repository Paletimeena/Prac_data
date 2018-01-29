#!/usr/bin/python
num=raw_input("Please enter the number in binary formate\n")
num1=raw_input("Please enter the number in decimal formate\n")
num2=raw_input("Please enter the number in octal formate\n")
num3=raw_input("Please enter the number in hexadecimal formate\n")
num4=raw_input("Please enter the number in float formate\n")

data=raw_input("Please enter the string in single quotes\n")
data1=raw_input("Please enter the string in double quotes\n")
data2=raw_input("Please enter the string in triple quotes\n")

"""print num
print num1
print num2
print num3
print num4"""

res=int(num)
print res
res=bin(num1)
print res
res=oct(num2)
print res
res=hex(num3)
print res
res=float(num)
print res

res=str(data)
print res
res=str(data1)
print res
res=str(data2)
print res
