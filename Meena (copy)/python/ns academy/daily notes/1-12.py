#dictionari.....

en2kn={}
en2kn=dict()
type(en2kn)
en2kn['village']='halli'
en2kn['school']='shale'
en2kn['teacher']='guru'
print len(en2kn)
print ek2kn

while count<len(en2kn.keys()):
    print [en2kn.keys()[count]]
    count+=1
	
en2kn.clear()
en2kn.items()
en2kn.value()
en2kn.copy()
en2kn.has_key('school')
en2kn.get('school')
en2kn.formkeys(['school'],['teacher'])
en2kn.formkeys(en2kn.keys)
en2kn.pop('teacher')

..............
dictionary compensation
x=[1,2,3]
for y in x:
    print x*x

[y*y for y in x]//for elements
[y:y*y for y in x]
[y:y*y for y in x]if x%2==0


x={'key1':'value1'}
y={'key2':'value2'}
x+y//error
x.update(y)//x ill get updated
