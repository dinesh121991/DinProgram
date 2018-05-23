import os

def walk_cwd( dirname ):
	for file in os.listdir(dirname):
		os.path.join(dirname,file)
		if os.path.isfile(file):
			print file
		else:
			walk_cwd(file)

fout = open('py.txt', 'w');
#fout.write("Dinesh is readinh thinhPython2E");
i = 52
str1 = str(i);
fout.write(str1);
str1 = "\nDinesh is ranked %d th in the Class %s" % (i,"A section" )
fout.write(str1);
fout.close();

print os.getcwd()
print os.path.abspath('py.txt')
print "py.txt is directory %s" % os.path.isdir('py.txt');
print os.path.isdir('py.txt');
print os.path.exists('py.txt');
print os.path.isfile('py.txt');

walk_cwd(os.getcwd())
