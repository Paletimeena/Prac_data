#!/usr/bin/python
import cv2
import os
from PIL import Image
from numpy import array
source = array(os.listdir('./'))
s = 150,150
c =0
print source,type(source)
for image in source:
	if  image.endswith(".jpg"):
		im = Image.open(image)
		im.thumbnail(s,Image.ANTIALIAS)
		im.save(str(c)+".jpeg")
		c = c+1	