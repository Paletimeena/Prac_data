import sys
print ("the command line arguments")
for args in sys.argv:
	print args
argc=len(sys.argv)
print argc
for index in range(argc):
	print sys.argv[index]
