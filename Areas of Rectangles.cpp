#include <iostream>

using namespace std;

int main()
{
	
	
	double length1, width1, length2, width2;
	double area1, area2;
	
	cout << "Enter the length and width of the first rectangle seperated by a space.";
	cin >> length1 >> width1;
	
	area1 = length1 * width1;
	
	cout << "Enter the length and width of the second rectangle separated by a space.";
	cin >> length2 >> width2;
	
	area2 = length2 * width2;
	
	if (area1 > area2)
		cout << "The first rectangle is larger.";
	else if (area1 < area2)
		cout << "The second rectangle is larger.";
	else
		cout << "The rectangles are the same size.";
		
		return 0;	
	
	
}
