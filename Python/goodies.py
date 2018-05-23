import math
def log_c(x):
	return math.log(x) if x > 0 else float('NaN')
def factorial(numb):
	return 1 if (numb == 1 or numb == 0) else numb*factorial(numb-1)

print factorial(4)
print factorial(0)
print log_c(2)
print log_c(0)
#print factorial(-1) # infinite recursion 
a = 9
s = a if a == 10 else 5
print s
s = 'dinesh'
print ([t.upper() for t in s])
print [ t for t in s if t.islower() ]
#print [ t if t.isupper() for t in s] #if will require else

gen = ( x**2 for x in range(1,5,2))
print gen
for g in gen:
	print g
#print 'sum: {0}, max: {1}'.format(sum(gen), max(gen))
#for g in gen:
#	print g
