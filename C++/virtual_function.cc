#include <iostream>

using namespace std;

class base {
	protected:
		int height;
		int width ;
	public:
		base( int height, int width )
		{
			height = height;
			width =  width ;
		}
		void setWidth(int width){
			width = width;
		}
		int getWidth();
		int getArea();
};
int base::getWidth() 
{
	return width;
}
int base::getArea()
{
	return (width*height);
}

class child1: public base
{
	public:
		child1(int height, int width)
		{
			this(height,width);
		}
		int getArea()
		{
        		return (width*height)/2 ;
		}
};

int main()
{
	base b(4,2);
	cout << "B Area:" << b.getArea() << endl;
	child1 c(4,2);
	cout << "C Area:" << c.getArea() << endl;	
	return 0;

}
