#include <iostream>

using namespace std;

int main()

{
	
	double cookies, calories;
	
	double servCals = 300;
	
	double cookieCals = servCals / 3;
	
	cout << "How many cookies did you eat? ";
	cin >> cookies;
	
	calories = cookies * cookieCals;
	
	cout << cookies << " cookie(s) cantain " << calories << " calories." << endl;
	
	return 0; 
	
}
