#!/bin/bash

echo "choose a colour from Red,Green,Blue,Orange"
read colour
if [ $colour == Red ];
 then
	echo "you are cheerful"
elif [ $colour == Blue ];
 then
	echo "your are lucky"
else
	echo "you are great"
fi
