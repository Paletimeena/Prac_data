#!/usr/bin/python
def time_diff(sort,stop):
	diff=[]
	if(stop[2]-start[2])<0:
		ss=(stop[2]-sort[2])+60
		mm=(stop[1]-start[1])-1
	else:
		ss=stop[2]-start[2]

	if(stop[1]-start[1])<0:
		mm=(stop[1]-sort[1])+60
		hh=(stop[0]-start[0])-1
	else:
		
		mm=(stop[1]-sort[1])
		hh=(stop[0]-start[0])
		
	diff=[hh,mm,ss]
	return diff
start=[13,50,45]
stop=[14,45,20]
time_diff=time_diff(start,stop)
print time_diff
