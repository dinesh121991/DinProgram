#!/bin/bash
echo "sum is $(($1 $2 $3))"
echo "sum is $[$1 $2 $3]"
x=`expr $1 $2 $3`
echo "sum is $x"
echo "sum is `expr $1 $2 $3`"
let x="$1 $2 $3"
echo "sum is $x"
a=12; b=13; c=15
if test $a -lt $b
then
	echo "test1: `test $a -lt $b`"
fi
