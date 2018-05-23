import math;
def s_to_n_ratio(signal, noise):
	if(noise == 0 and signal < noise):
		return
	else:
		return (10*math.log10((signal/noise)))

print s_to_n_ratio(2000, 12)
