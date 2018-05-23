foo() {
	echo "Dinesh- $1";
}

foo 32
b=2
a="$(foo $b)"
echo "Main: $a"
