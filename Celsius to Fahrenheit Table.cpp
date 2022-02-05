#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
	
	double celsius, fahrenheit;
	
	
	
	for(celsius = 0; celsius <= 20; celsius++)
	
	{
	
	
	fahrenheit = (9 * celsius) / 5 + 32;
	
	cout << setprecision(2) << fixed;
	cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << endl;
	
	}
	
	return 0;
	
}+
