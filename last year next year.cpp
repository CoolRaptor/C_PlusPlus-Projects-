#include <iostream>

using namespace std;

int main()

{
	
	int age, nyear, lyear;
	
	cout << "How old are you?";
	
	cin >> age;
	
	nyear = age + 1;
	
	lyear = age - 1;
	
	cout << "Next year you will be " << nyear << endl;
	
	cout << "Last year you were " << lyear << endl;
	
	return 0;
	
}
