#!/bin/bash

# Find file by using grep command

for file in *
do
	if grep -q "bash" $file
	then
		echo $file
	fi
done
