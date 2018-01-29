#!/bin/bash

echo "Enter two digits to perform arithmetic operation"
read num1
read num2
echo "Choose operation to be performed on $num1 and $num2"
echo "add sub mul div rem"
read -p "Choice=>" operand

case "$operand" in

Add | add) echo "Addtion = `expr $num1 + $num2`";;
Sub | sub) echo "Substration= `expr $num1 - $num2`";;
Mul | mul) echo "Multiplication= `expr $num1 \* $num2`";;
Div | div) echo "Division= `expr $num1 / $num2`";;
Rem | rem) echo "Remainder= `expr $num1 % $num2`";;
*) echo "Answer not recognized";;

esac
