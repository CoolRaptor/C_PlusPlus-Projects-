#include <iostream>

using namespace std;

int main()

{
	
	double purchase, sTax, cTax, totalTax;
	
	purchase = 95;
	
	sTax = purchase * 0.04;
	
	cTax = purchase * 0.02;
	
	totalTax = sTax + cTax;
	
	cout << "The total tax is $" << totalTax << "." << endl;
	
	return 0;
	
}
