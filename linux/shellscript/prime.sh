#!/bin/bash

for numo in {2..100}
do 
	range=`expr $numo / 2`
	flag=0
	for((index1=2;index1<=$range;index1++))
	do 
		res=`expr $numo % $index1`
		if [ $res -eq 0 ]
		then
			flag=1
			break
		fi
	done
	if [ $flag -eq 0 ]
	then
		echo "Prime number : $numo "
	fi
done
		
