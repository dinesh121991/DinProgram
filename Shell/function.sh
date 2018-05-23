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

foo $a
echo "Global: $sample_text"
