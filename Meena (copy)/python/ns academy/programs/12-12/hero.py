class Hero:
    def setName(self,value):
        self.name=value
    def display(self):
        print self.name
x=Hero()
y=Hero()
x.setName("prabhas")
y.setName("allu arjun")
x.display()
y.display()
print x.name
print y.name
