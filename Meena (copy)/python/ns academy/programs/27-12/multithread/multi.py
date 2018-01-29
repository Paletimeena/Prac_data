import threading
def worker(name):
    print name

threads =[]
count=0
for i in range (5):
    t=threading.Thread(target=worker,args=('threadname',))
    threads.append(t)
    t.start()

    count=count+1
    print "thread  number is:",str(count)

