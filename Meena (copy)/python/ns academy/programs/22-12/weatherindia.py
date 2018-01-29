import urllib2,json
url='http://api.apixu.com/v1/current.json?key=b3966d5d9cf04e57a3063859162312&q=India'
fp=urllib2.urlopen(url)
jsondata=fp.read()
print jsondata
data=json.loads(jsondata)
print type(data)
print data['location']['tz_id']
