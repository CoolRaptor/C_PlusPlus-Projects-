#include <iostream>
#include <iomanip>
using namespace std;

double getLength();
double getWidth();
double getArea(double, double);
void displayData(double,double,double);


int main()
{
	double length, width, area;
	
	length = getLength();
	width = getWidth();
	area = getArea(length, width);
	displayData(length, width, area);
	
	return 0;
}


double getLength()
{
	double length;
	cout << "How long is the rectangle in inches?" << endl;
	cin >> length;
	return length;
}

double getWidth()
{
	double width;
	cout << "How wide is the rectangle in inches?" << endl;
	cin >> width;
	return width;
}

double getArea(double x, double y)
{
	return x * y;
}

void displayData(double length, double width, double area)
{
	cout << "The length of the rectangle is " << length << " inches." << endl <<
			"The width of the rectangle is " << width << " inches." << endl <<
			"The area of the rectangle is " << area << " square inches." << endl;
}
