import calendar,time
from calendar import datetime
#print calendar.calendar(2017,1,1)
#print datetime.datetime(2017-01-01)
#print calendar.monthcalendar(2017,1)
wk =datetime.date(2017,5,5).weekday()
print wk
#sun=calendar.weekday(2017,1,1)
pr=datetime.datetime(2017,5,5)
print pr
pd=datetime.timedelta(days=wk)
mon=pr-pd
print "monday date is",mon
print calendar.calendar(2018)


