from datetime import date,timedelta

def allsundays(year):
    d=date(year,1,1)
    #print d
    d+=timedelta(days=6-d.weekday())
    #print d
    while d.year==year:
        yield d
        d+=timedelta(days=7)
        #print d
      
c=0
for d in allsundays(2018):
    print d
    c=c+1

print "number of sundays in 2018",c
    
