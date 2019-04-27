#!/bin/sh
trap 'rm -f /tmp/my_tmp_file_$$' INT
echo creating file /tmp/my_tmp_file_$$
date > /tmp/my_tmp_file_$$
echo "press interrupt (CTRL-C) to interrupt ...."
while [ -f /tmp/my_tmp_file_$$ ]; do
	echo File exists
	sleep 1
done
echo The file no longer exists
sleep 50
trap INT
echo 2creating file /tmp/my_tmp_file_$$
date > /tmp/my_tmp_file_$$
echo "2 press interrupt (control-C) to interrupt ...."
while [ -f /tmp/my_tmp_file_$$ ]; do
	echo File exists
	sleep 1
done
echo 2we never get here
exit 0
