from xml.etree import ElementTree as ET
import os
filepath=os.getcwd()+'/topstories.xml'
fp=open(filepath,'rb')
tree=ET.parse(fp)
root=tree.getroot()
print root
for gp in root:
    for p in gp:
        print p.tag
        for c in p:
            print c.text
       
