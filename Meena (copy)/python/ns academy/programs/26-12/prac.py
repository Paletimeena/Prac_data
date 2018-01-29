import urllib2,os,thread,time
startts=time.time()
urls=['http://d23ipcd5miwp4q.cloudfront.net/wp-content/uploads/2016/01/Mahesh-Babu-and-Shruti-Hassan13.jpg',
      'http://teluguinfo.com/images/film/mahesh-babu.jpg']
def downloadimage(url):
    print 'loop entry'
    print url
    filepath=os.getcwd()+'/'+str(url.split('/')[-1:])
    #filepath=os.getcwd()+'/'+str(filepostfix)
    print filepath
    fp=urllib2.urlopen(url)
    fw=open(filepath,'wb')
    fw.write(fp.read())
    fp.close()
    fw.close()
    

try:
    for url in urls:
        print 'loop entry'
        print url
        thread.start_new_thread(downloadimage,(url,))
except Exception,e:
    print e
    
totaltime=time.time()-startts
print totaltime

while 1:
    pass
        
