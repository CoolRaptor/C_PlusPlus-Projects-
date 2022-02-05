#include <iostream>

using namespace std;

int main()

{
	double cost, tax, tip, total;
	
	cost = 88.67;
	
	tax = cost * 0.0675;
	
	tip = (cost + tax) * 0.20;
	
	total = cost + tax + tip;
	
	cout << "The meal cost is $" << cost << "." << endl;
	cout << "The tax ammount is $" << tax << "." << endl;
	cout << "The tip ammount is $" << tip << "." << endl;
	cout << "The total bill is $" << total << "." << endl;
	
	return 0;
	
}
