#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
	int num;
	int year = 2020;
    double memFee = 2500;
    
    cout << "Year          Membership Fee" << endl <<
    		"----------------------------" << endl ;
    		
   for (num = 0; num <= 6; num++)
	{
	cout << year << "          $" << setprecision(2) << fixed << memFee << endl;
	
	year++;
	memFee*= 1.04;
	}
 		
   
    return 0;
}
