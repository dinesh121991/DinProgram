#!/usr/bin/python
def countdown(n):
	if n <= 0:
		print ("blast off!");
	else:
		print n;
		countdown(n-1)

countdown(10)
