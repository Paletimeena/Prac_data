import datetime,time,calendar
now=datetime.datetime.today()
print now,"now"
print time.localtime(time.time()),"localtime"
print datetime.datetime.today()
pd=datetime.timedelta(days=5)
print pd,"pd"
p=now-pd
n=now+pd
print p
print n

