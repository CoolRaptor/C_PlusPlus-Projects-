#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
	
	double celsius, fahrenheit;
	
	cout << "What is the temperature in degrees Celsius? ";
	cin >> celsius;
	
	fahrenheit = (9 * celsius) / 5 + 32;
	
	cout << setprecision(2) << fixed;
	cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << endl;
	
	return 0;
	
}
