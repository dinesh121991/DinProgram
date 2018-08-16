from swampy.TurtleWorld import *
import math
def square(t, length):
	print t
	for i in range(4):
		fd(t, length)
		lt(t)
def polygon(t, length, n):
	print t
	angle = 360/n
	print angle
	for i in range(n):
		fd(t, length)
		lt(t,angle)

def circle(t, radius):
	t.delay = 0.01
	n = int(((math.pi)*radius*2)/50)
	#n = n/0.01;
	polygon( t, n, 50)

def arc(t, length, angle):
	t.delay = 0.01
	print t
	n = int(((math.pi)*length*2)/50)
	angle = angle/50;
	for i in range(50):
		fd(t, n)
                lt(t,angle)

world = TurtleWorld()
bob = Turtle()
#square(bob, 100)
#polygon(bob, 10, 6)
#circle(bob, 20)
arc(bob, 20, 180)
arc(bob, angle=180, length=20)
wait_for_user()


