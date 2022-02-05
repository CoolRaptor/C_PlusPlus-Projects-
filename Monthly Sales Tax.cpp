#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()

{
	
	string month, year;
	
	double totalCollected;
	
	cout << "Which month are you calculating?    ";
	cin >> month;
	
	cout << "Which year?                         ";
	cin >> year;
	
	cout << "What is the total amount collected? ";
	cin >> totalCollected;
	
	double sales, countyTax, stateTax, totalTax;
	
	sales = totalCollected / 1.06;
	
	countyTax = sales * 0.02;
	
	stateTax  = sales * 0.04;
	
	totalTax = countyTax + stateTax;
	
	cout << setprecision(2) << fixed;
	cout << "Month/Year:  " << month << " " << year << endl;
	cout << "------------------------------" << endl;
	cout << "Total Collected:          $" << setw(10) << totalCollected << endl;
	cout << "Sales:                    $" << setw(10) << sales << endl;
	cout << "County Sales Tax:         $" << setw(10) << countyTax << endl;
	cout << "State Sales Tax:          $" << setw(10) << stateTax << endl;
	cout << "Total Sales Tax:          $" << setw(10) << totalTax << endl;
	
	return 0;

	
}
