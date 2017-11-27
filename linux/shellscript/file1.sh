#!/bin/bash

if test -f example.sh
then
 echo "file found"
else 
 echo not found
fi


if [ -f example.sh ]
then 
 echo testing second time
fi
