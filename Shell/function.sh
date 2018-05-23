foo() {
	echo "Dinesh- $1";
}

foo 32
b=2
a="$(foo $b)"
echo $a
echo "Main: $a"

sample_text="Global Variable"
echo "Global: $sample_text"
foo() {
	local sample_text="Local Variable"
	echo "Local: $sample_text Param: $0 $1"
}
echo "Global: $sample_text"

foo "$a"
echo "Global: $sample_text"

yes_or_no() {
	while true
	do
		echo "Is your name $* ?"
		read status
		case "$status" in
			[yY] | [yY][eE][sS]) return 1;;
			[nN] | [nN][oO]) return 0;;
			* ) echo "Enter Yes / No only..."
		esac
	done
}

echo "Enter Your Name"
read name

if yes_or_no "$name"
then
	echo "Yes, You are $name"
else
	echo "Who you are?"
fi
