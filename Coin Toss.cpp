#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void coinToss ();

int main()
{
	int times, count;
	
	unsigned seed = time(0);
	
	srand(seed);
	
	cout << "How many times do you want to flip the coin?" <<	endl;
	cin >> times;
	
	for (count = 0; count < times; count++)
	{
		coinToss();
	}
	
	return 0;
}

void coinToss()
{
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 2;	
	
	
	
	int coin = (rand () % (MAX_VALUE - MIN_VALUE +1))+ MIN_VALUE;
	
	if (coin == 1)
		cout << "Heads" << endl;
	else
		cout << "Tails" << endl;
		
	return;
	
	
}
