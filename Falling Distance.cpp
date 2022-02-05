#include <iostream>
using namespace std;

double fallingDistance(double);

int main()

{
	double time;
	double distance;
	
	for (time = 1; time <= 10; time++)
	{
		distance = fallingDistance(time);
		
		cout << "If an object falls for " << time << " seconds, it will fall " << distance << " meters." << endl;
	}
}

double fallingDistance(double time)
{
	return .5 * 9.8 * time;
}
