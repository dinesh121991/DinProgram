class student(object):
	"""Student Attributes"""

s1 = student()
s2 = s1
if s1 is s2:
	print True
s1.name ="dines"
s1.addr= "Chennai"
#s2 = copy.copy(s1)
print s1 is s2
print s2.name, s1.name
#s2.add = "madurai"
print hasattr(s1,'add')

class Teacher(object):
	"""Teacher professional info.
	attributes: name, address, school_name
	"""
teacher = Teacher()
print type(teacher)
print hasattr(teacher, 'address')
