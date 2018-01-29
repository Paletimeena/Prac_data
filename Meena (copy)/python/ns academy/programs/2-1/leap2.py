import time
now=time.localtime(time.time())
print now
print now[0]
if now[0]%4==0:
    print "its leap year"
else:
    print "its not leap year"
