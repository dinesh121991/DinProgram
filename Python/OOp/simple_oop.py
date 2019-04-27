class University:
    strength = 0
    def __init__(self, univ_name, univ_address):
        self.univ_name = univ_name
        self.univ_address = univ_address
        University.strength += 1
    def tell(self):
        """Tell method."""
        print('University name: {} age: {}'.format(self.univ_name, self.univ_address))

    @classmethod
    def count(cls):
        """Count print."""
        print("Count: {}".format(cls.strength))


class CollegeMember:
    """ This is the class members Base class."""
    strength = 0

    def __init__(self, name, age):
        """Init definition."""
        self.name = name
        self.__age = age
        CollegeMember.strength += 1

    def tell(self):
        """Tell method."""
        print('CollegeMember name: {} age: {}'.format(self.name, self.__age))

    @classmethod
    def count(cls):
        """Count print."""
        print("Count: {}".format(cls.strength))

class Teacher(CollegeMember, University):
    def __init__(self, name, age, salary, univ_name, univ_address):
        University.__init__(self, univ_name, univ_address)
        CollegeMember.__init__(self, name, age)
        self.salary = salary
    def tell(self):
        University.tell(self)
        CollegeMember.tell(self) 
        print("Salery: {}".format(self.salary))

c = CollegeMember("Dinesh", 27)
c.tell()
c.count()
c1 = CollegeMember("Kumar", 28)
c1.tell()
c1.count()
t = Teacher("Dinesh Kumar", 45, 100000000000000000, "IRTT", "Erode")
t.tell()
t.count()
print("Awesome!!!")
c1.attr = 12
print c1.attr
print("Attr:",c.attr)
print(c.__age)

