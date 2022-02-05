#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail (double, double);

int main()
{
	
	double cost, mark; 
	
	
	
	cout << "Enter the item's wholesale cost." << endl;
	cin >> cost;
	
	while (cost < 0)
	{
		cout << "ERROR. Cost cannot be negative. Please input cost." <<endl;
		cin >> cost;
	}
	
	cout << "Enter the desired markup in percent form (%)." << endl;
	cin >> mark;
	
	while (mark < 0)
	{
		cout << "ERROR. Markup cannot be negative. Please enter the desired markup." << endl;
		cin >> mark;
	}
	
	mark /= 100;
	
	double retail = calculateRetail(cost, mark);
	
	cout << setprecision(2) << fixed <<
			"The final retail price is $" << retail << "." << endl;
			
	return 0;
	
	
	
}

double calculateRetail (double cost, double mark)
{
	return cost * (mark + 1);
}
