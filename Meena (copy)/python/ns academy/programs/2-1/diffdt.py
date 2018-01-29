import calendar ,time
from calendar import datetime
day1=raw_input("enter the date")
print (day1)
cd=day1.split('-')
pr=datetime.date(int(cd[0]),int(cd[1]),int(cd[2]))
print pr
day2=raw_input("enter the date")
print (day2)
pd=day2.split('-')
dr=datetime.date(int(pd[0]),int(pd[1]),int(pd[2]))
print dr
days=pr-dr
print days
