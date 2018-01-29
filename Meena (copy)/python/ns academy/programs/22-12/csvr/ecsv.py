import csv,os
filepath=os.getcwd()+'/newfile2.csv'
with open(filepath,'r')as fp:
    rows=csv.reader(fp,delimiter='|')
    for row in rows:
        print row
filepath=os.getcwd()+'/newfile2.csv'
with open(filepath,'wb')as fw:
	csvwriter=csv.writer(fw,delimiter=',')
	csvwriter.writerow(['col3','col4'])
filepath=os.getcwd()+'/newfile2.csv'
with open(filepath,'r')as fp:
    rows=csv.reader(fp,delimiter='|')
    for row in rows:
        print row





















