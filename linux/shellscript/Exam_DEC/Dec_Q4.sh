#!/bin/bash

fibonic_series()
{
a=1
b=1
if [ $# -eq  0 ]
then
	digits=5
else
	digits=$1
fi
for((index=1; index<$digits; index++))
	do
		if [ $index -eq 1 ]
		then
			printf "Numbers are : %d" $a
		fi
		printf " %d" $b
		temp=$b
		b=`expr $a + $b`
		a=$temp
	done
echo



}

fibonic_series $1
