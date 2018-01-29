import urllib2,json
url='http://api.apixu.com/v1/current.json?key=7c2134e9c04d48e297562951162312&q=Paris'
fp=urllib2.urlopen(url)
jsondata=fp.read()
print jsondata
data=json.loads(jsondata)
print type(data)
print data['current']['temp_f']
