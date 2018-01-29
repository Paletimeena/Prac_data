import xml2json
import json

s = '''<?xml version="1.0"?>
<catalog>
  <book isbn="1-880985-26-8">
    <title>The Consumer</title>
    <author>M. Gira</author>
  </book>
  <book isbn="0-679775-43-9">
    <title>The Wind-Up Bird Chronicle</title>
    <author>Haruki Murakami</author>
  </book>
  <book isbn="0-679775-13-6">
    <title>Deccon Chronicle</title>
    <author>Kulkarni</author>
  </book>
  <book isbn="0-679775-93-6">
    <title>Python</title>
    <author>David varner</author>
  </book>
</catalog>'''

### Storage data:
print xml2json.xml2json(s)

### Parsing to use:
json_data = json.loads(xml2json.xml2json(s))
