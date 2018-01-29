#!/usr/bin/python
import urllib2,os
import threading
import time

#exitFlag = 0

class myThread (threading.Thread):
    def __init__(self,url):
        threading.Thread.__init__(self)
        self.url = url

    def run(self):
        print 'loop entry'
        print self.url
        filepath=os.getcwd()+'/'+str(self.url.split('/')[-1:])
        #filepath=os.getcwd()+'/'+str(filepostfix)
        print filepath
        fp=urllib2.urlopen(self.url)
        fw=open(filepath,'wb')
        fw.write(fp.read())
        fp.close()
        fw.close()


# Create new threads
thread1 = myThread( "https://www.tutorialspoint.com/python/images/python-mini.jpg")
thread2 = myThread("http://images.all-free-download.com/images/graphiclarge/flowers_in_full_bloom_hd_picture_166891.jpg")

# Start new Threads
thread1.start()
thread2.start()

print "Exiting Main Thread"
