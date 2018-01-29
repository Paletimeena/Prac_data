import urllib2,os
url='https://www.tutorialspoint.com/python/images/python-mini.jpg'
filepath=os.getcwd()+'/python-mini.jpg'
fp=urllib2.urlopen(url)
fw=open(filepath,'wb')
fw.write(fp.read())
fp.close()
fw.close()
