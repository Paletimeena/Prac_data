class Animals(object):
    def __init__(self,kind,name):
        self.kind=kind
        self.name=name
    def printName(self):
        print "name: ",self.name,"kind: ",self.kind
class cat(Animals):
    def __init__(self,name,kind,shout):
        #self.kind=kind
        #self.name=name
        super(cat,self).__init__(name,kind)
        self.shout=shout
    def shoutout(self):
        print self.shout

c1=cat('cat1','black','meow')
c1.shoutout()
c1.printName()
