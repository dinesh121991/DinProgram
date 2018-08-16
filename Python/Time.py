#!/bin/python
class Time(object):
	"""Time object attributes:hours, minutes, seconds"""
	def print_time(self):
		print("%.2d:%.2d:%.2d\n"%(self.hours,self.minutes,self.seconds))
	def time_to_int(self):
		return self.minutes*60 + self.hours*60 + self.seconds;
	def __init__(self, hours=0, minutes=0, seconds=0):
		self.hours = hours;
		self.minutes = minutes;
		self.seconds = seconds
	def __str__(self):
		return ("%.2d:%.2d:%.2d\n"%(self.hours,self.minutes,self.seconds))

t = Time(2,45,5)
t.print_time()
print(t) 
				
