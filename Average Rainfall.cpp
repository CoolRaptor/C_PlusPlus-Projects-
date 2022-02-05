#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
 
    int years, count, count2;
    double rain, totalRain;
        
    totalRain = 0;
    
    
    cout << "For how many years did you collect data?" << endl;
    cin >> years;
    
    while (years < 1)
    {
        cout << "Invalid number of years. please input 1 or more?"<< endl;
        cin >> years;
    }
    for(count = 1; count <= years; count++)
    {
       for(count2 = 1; count2 <= 12; count2++)
       {
       	cout << "How many inches did it rain in year " << count << " month " << count2 << endl;
       	cin >> rain;
       	
       	 while(rain < 0)
        {
            cout<<"It cannot rain negative inches." << endl <<
                  "How many inches did it rain in year " << count << " month " << count2 << endl;
            cin >> rain;                 
        }
       	
       	totalRain += rain;
       	
	   }
        
    }
    
   double totalMonths = years * 12;
   double average = totalRain / totalMonths;
   
    
    cout << "You collected rain data for " << totalMonths << " months." << endl <<
            "In that time it rained a total of " << totalRain << " inches." << endl <<
            "The average rainfall per month was " << average << " inches." << endl;  
    
   
    return 0;
}
