#include <iostream>
using namespace std;

int main()
{
	double gallons, miles, mpg;
	
	cout << "How many gallons of gas does your vehicle hold?";
	cin >> gallons;
	
	cout << "How many miles can your vehicle go on a full tank?";
	cin >> miles;
	
	mpg = miles / gallons;
	
	cout << "Your vehicle can go " << mpg << " miles per gallon of gas." << endl;
	
	return 0;
	
}
