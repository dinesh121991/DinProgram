fin = file("words.txt")
print fin
for line in fin:
#	print "enter"
#	print line
	tmp_str = line.strip()
	if len(tmp_str) >=20:
		print tmp_str
 
