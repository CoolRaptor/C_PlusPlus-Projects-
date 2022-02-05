#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 20;
	
	int randNum;
	
	int guess;
	
	unsigned seed = time(0);
	
	srand(seed);
	
	randNum = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
	
	cout << "A number between 1 and 20 has been generated." << endl << endl <<
			"See if you can guess what it is!" << endl;
			
	cin >> guess;
	
	while (guess != randNum)
	
	{
	
	do
	{
		cout << "Too low, try again." << endl;
		cin >> guess;
	} while (guess < randNum);
	
	do
	{
		cout << "Too high, try again." <<endl;
		cin>> guess;
	} while (guess > randNum);

	}

	cout << "You guessed correctly! The random number was " << guess << "." << endl;
	
	return 0;
	
}
