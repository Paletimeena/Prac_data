#!/bin/bash

num = 1;

until [ $num -gt 15 ];
do
	echo $num
	num=$(( num+1 ))
done

