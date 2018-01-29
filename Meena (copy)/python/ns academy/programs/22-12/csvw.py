import csv,os
filepath=os.getcwd()+'/newfile2.csv'
with open(filepath,'wb')as fw:
    csvwriter=csv.writer(fw,delimiter=',')
    csvwriter.writerow(['col1','col2'])
    csvwriter.writerow(['val1','val2'])
 






















