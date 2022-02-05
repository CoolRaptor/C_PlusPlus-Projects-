#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double rainFall[12];

    cout << "Please enter rainfall data for 12 Months:" << endl;
    for(int counter = 0; counter < 12; counter++)
	{
        cout << "Month " << counter + 1 << ": ";
        cin >> rainFall[counter];
        
        while(rainFall[counter] < 0)
		{
            cout << "ERROR! Negative values not accepted for rainfall!" << endl;
            cout << "Please enter again!" << endl;
            cout << "Month " << counter + 1 << ": " << endl;
            cin >> rainFall[counter];
        }
        cout << endl;
    }

    double total = 0.0, average;


    int lowest = 0, highest = 0;

    for(int counter = 0; counter < 12; counter++){
        
        if(rainFall[counter] < rainFall[lowest])
            lowest = counter;
        
        if(rainFall[counter] > rainFall[highest])
            highest = counter;

        
        total += rainFall[counter];
    }

    
    average = (double)total/12;

    
    cout << fixed << setprecision(2);
    cout << "The total yearly rainfall: " << total << endl;
    cout << "The average monthly rainfall: " << average << endl;
    cout << "The lowest rainfall was in month " << lowest + 1;
    cout << " with " << rainFall[lowest] << endl;
    cout << "The highest rainfall was in month " << highest + 1;
    cout << " with " << rainFall[highest] << endl;

    return 0;
}

