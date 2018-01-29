class A(object):
    def __init__(self,kind,name):
        self.kind=kind
        self.name=name
    def printName(self):
        print "name: ",self.name,"kind: ",self.kind
    
class B(A):
    def __init__(self,kind,name):
        super(B,self).__init__(kind,name)
class C(B):
    def __init__(self,kind,name):
        super(C,self).__init__(kind,name)
c1=B("hsb","dgd")
c2=C("fhdf","de")
c2.printName()
c1.printName()
print c1.name
print c2.name
