def print_ntimes(s, n):
	if( n <=0 ):
		return
	else:
		print s
		print_ntimes(s, n-1)

print_ntimes("dinesh", 5)
