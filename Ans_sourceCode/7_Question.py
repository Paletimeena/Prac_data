#!/usr/bin/python
import zlib
print("\n\n ***** Question_7 *****\n\n")

data = "helloworld!hello world!helloworld!hello world!"

# compress the data
c_data = zlib.compress(data)

# Decompress the data
de_data = zlib.decompress(c_data)

print(de_data)