#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{

  
   
    double floors, occupied, vacant, total, count, floorTotal;
    double occupancyRate;
    
    total = 0;
    
    occupied = 0;
    
    
    cout << "How many floors does the hotel have?" << endl;
    cin >> floors;
    
    while (floors < 1)
    {
        cout << "Invalid number of floors. How many floors are there?"<< endl;
        cin >> floors;
    }
    for(count = 1; count <= floors; count++)
    {
        cout << "How many rooms are there on floor " << count << "?" << endl;
        cin >> floorTotal;
        while(floorTotal < 10)
        {
            cout<<"Each floor must have 10 or more rooms." << endl <<
                  "How many rooms are on floor " << count << "?" << endl;
            cin >> floorTotal;                 
        }
        total += floorTotal;
        cout << "How many rooms on floor " << count << " are occupied?" << endl;
        cin >> occupied;
        
    }
    
    vacant = total - occupied;
    
    occupancyRate = occupied / total;
    
    cout << "Total number of rooms: " << total << endl <<
            "Occupied Rooms: " << occupied << endl <<
            "Vacant Rooms: " << vacant << endl <<
            "Hotel Occupancy Rate: " << occupancyRate*100 << "%" << endl;
    
    
 		
   
    return 0;
}
