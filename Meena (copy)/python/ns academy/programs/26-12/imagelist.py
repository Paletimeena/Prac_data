import urllib2,os
url='http://images.all-free-download.com/images/graphiclarge/beautiful_flower_series_04_hd_pictures_166886.jpg'
filepath=os.getcwd()+'/image1.jpg'
fp=urllib2.urlopen(url)
fw=open(filepath,'wb')
fw.write(fp.read())
fp.close()
fw.close()

url1='http://images.all-free-download.com/images/graphiclarge/beautiful_flowers_02_hd_picture_166969.jpg'
filepath=os.getcwd()+'/image2.jpg'
fp=urllib2.urlopen(url1)
fw=open(filepath,'wb')
fw.write(fp.read())
fp.close()
fw.close()

url2='http://image.shutterstock.com/display_pic_with_logo/91151/260947124/stock-photo-tokyo-japan-april-cherry-blossoms-festival-in-the-shinjuku-gyoen-national-gardens-on-april-260947124.jpg'
filepath=os.getcwd()+'/image3.jpg'
fp=urllib2.urlopen(url2)
fw=open(filepath,'wb')
fw.write(fp.read())
fp.close()
fw.close()

url3='http://images.all-free-download.com/images/graphiclarge/flowers_in_full_bloom_hd_picture_166891.jpg'
filepath=os.getcwd()+'/image4.jpg'
fp=urllib2.urlopen(url3)
fw=open(filepath,'wb')
fw.write(fp.read())
fp.close()
fw.close()


