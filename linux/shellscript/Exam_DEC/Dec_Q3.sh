#!/bin/bash


files=0
subdir=0

for i in `ls`
do 
	if [ -f $i ]
	then
		files=`expr $files + 1`
	
	elif [ -d $i ]
	then
		subdir=`expr $subdir + 1`
	else
		echo ""
	fi
done
echo "Number of files : $files"
echo "Number of subdirectory : $subdir"

 

	
