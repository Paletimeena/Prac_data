#!/usr/bin/python
val=(raw_input("Please enter the number\n"))
res=int(val)
print res
res=long(val)
print res
res=float(val)
print res
res=complex(val)
print res

val=int(raw_input("Please enter the real part\n"))
val1=int(raw_input("Please enter the imaginary part\n"))
res=complex(val,val1)
print res

