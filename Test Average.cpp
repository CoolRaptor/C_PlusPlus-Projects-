#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
	double test1, test2, test3, test4, test5, average;

	cout << "What did you score on your 1st test?";
	cin >> test1;

	cout << "What did you score on your 2nd test?";
	cin >> test2;
	
	cout << "What did you score on your 3rd test?";
	cin >> test3;
	
	cout << "What did you score on your 4th test?";
	cin >> test4;
	
	cout << "What did you score on your 5th test?";
	cin >> test5;	
	
	average = (test1 + test2 + test3 + test4 + test5) / 5;
	
	cout << setprecision(1) << fixed;
	cout << "Your test average is " << average << "%." << endl;
	
	return 0 ;
	 
}
