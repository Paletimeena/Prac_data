import time
print time.time()
now=time.localtime(time.time())
print time.localtime(time.time())
print time.ctime(time.time())
print time.mktime(now)
print time.asctime(now)
