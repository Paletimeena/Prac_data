#!/bin/bash

echo "1 to 10 using for loop"
for num in {1..10}
do
	echo "$num"
done

num=1 
echo "1 to 10 using while loop"
while [ $num -le 10 ] 
do
	echo $num
	num=`expr $num + 1`
done
