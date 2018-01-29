class Vector(object):
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def __str__(self):
        return "Vector("+str(self.x)+","+str(self.y)+")"
    def __add__(self,other):
        return Vector(self.x+other.x,self.y+other.y)
    def __sub__(self,other):
        return Vector(self.x-other.x,self.y-other.y)
vector1=Vector(10,2)
print vector1
vector2=Vector(8,5)
print vector2
print vector1+vector2
print vector1-vector2
