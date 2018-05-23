#!/bin/python
a = [12,'dinesh',[1,2,3]]
print type(a)
print type(a[1])
print type(a[2])
print (a[1])
a[1] = 12.0987
print type(a[1])
print (a[1])
print a
b = []
print b
print type(b)

print 'dinesh' in a
print 12 in a

for aa in a:
	print aa

for i in range(len(a)):
	print a[i]
