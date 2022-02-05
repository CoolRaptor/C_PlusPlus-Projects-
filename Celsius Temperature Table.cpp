#include <iostream>
#include <iomanip>

using namespace std;

double celsius(double);

int main()



{
	
	double F, fahrenheit;
	
	
	
	for(F = 0; F <= 20; F++)
	{
		
	celsius(F);
		
	}
	
	return 0;
	
}

double celsius(double fahrenheit)

	{
	
	double celsius = (5 * (fahrenheit - 32)) / 9;
	
	cout << setprecision(2) << fixed;
	cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl;
	
	}
