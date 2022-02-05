#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int costA = 15, costB = 12, costC = 9;
	
	int seatsA, seatsB, seatsC;
	
	cout << "How many seats in Class A were sold?";
	cin >> seatsA;
	
	cout << "How many seats in Class B were sold?";
	cin >> seatsB;
	
	cout << "How many seats in Class C were sold?";
	cin >> seatsC;
	
	double total = (seatsA * costA) + (seatsB * costB) + (seatsC * costC);
	
	cout << setprecision(2) << fixed << showpoint;
	cout << "The total ticket sales gained $" << total << "." << endl;
	
	return 0;
	
}
