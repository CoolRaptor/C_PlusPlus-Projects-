#include <iostream>

using namespace std;

int main()

{
	
	double weight, height;
	
	cout << "Enter your weight in pounds.";
	cin >> weight;
	
	cout << "Enter your height in inches.";
	cin >> height;
	
	double BMI = (weight * 703)/(height * height);
	
	cout << "Your body mass index is " << BMI << "." << endl;
	
	if (BMI > 25)
		cout << "You are overweight.";
	else if (BMI < 18.5)
		cout << "You are underweight.";
	else
		cout << "You are at your optimal weight.";
		
	return 0;	
	
}
