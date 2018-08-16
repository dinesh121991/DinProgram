#!/bin/bash
var="A"
echo $var

foo() {
	local var=2
	echo "Dinesh- \$var: $var";
	return $var
}

var="$foo"
echo $var

var="Global"
local_var() {
	local var="Local"
	echo "Local: $var"
}

echo "Global: $var"
echo "Starting Script"
local_var
echo "Ending Script"
