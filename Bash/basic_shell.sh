#!/bin/sh
foo="Hello World"
echo $foo
foo=
echo $foo
unset foo
echo $foo

echo "\$*: $* , \$#: $# , \$@: $@"
while [ $1 != "" ]; do
	echo $1
	shift
done
date_op=`date`
echo $date_op
set -x `date`
printf "This month: %s \n" $2
x=1
add_x=`expr $x + 1`
printf "added-x: %d x: %d\n" $add_x $x

foo_fun() {
	echo "It is a foo function $1"
}
foo_ret=`foo_fun dinesh`
echo "foo_ret $foo_ret"
exit 0

foo="foo shell variable"
export bar="bar exported"
#env
bash ./export2.sh
