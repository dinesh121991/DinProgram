#include <iostream>
using namespace std;

class Box {
	private:
		double height;
		double breadth;
		double width;
	public:
		double getVolume();
		void setBreadth(double );
		void setHeight(double );
		void setWidth(double );
};

double Box::getVolume()
{
	return height*breadth*width ;
}

void Box::setWidth(double width)
{
	this.width = width;
}

void Box::setBreadth(double breadth)
{
	this.breadth = breadth;
}

void Box::setHeight(double height)
{
	this.height = height;
}

int main()
{
	Box *box1= new(Box);
	box1->setHeight(5);
	box1->setWidth(6);
	box1->setBreadth(9);
	cout << "Box1 Volume:" << box1->getVolume() <<endl;
	return 0;
}
