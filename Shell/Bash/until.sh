#!/bin/bash

user_name=$1
until who | grep "$user_name"
do
	echo "Login Name"
	read user_name
done

echo -e "\a"
echo “**** $user_name has just logged in ****“
exit 2
