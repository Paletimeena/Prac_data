import calendar,time
print time.time()
currenttime=time.localtime(time.time())
print currenttime
year=currenttime[0]
print calendar.calendar(2017,1)
print calendar.isleap(year)
