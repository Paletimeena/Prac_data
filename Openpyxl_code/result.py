import sys
import samplexl
lis=sys.argv
lis=lis[1:]
path=lis[0]
list1=lis[1:]

fp = open(path, "a+")
start = fp.readline()
if(len(start) == 0):
	result = "Pass"
	list1.append(result)
	samplexl.callxl(list1)
	print list1[0]," Executed succesfully"
else:
	result = "Fail"
	list1.append(result)
	samplexl.callxl(list1)
	print list1[0]," Failed Error found "

