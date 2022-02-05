#include <iostream>
#include <iomanip> 
using namespace std;

bool isFound(const int [], int, int);

int main()
{
   
    int accounts[18] = {5658845, 4520125, 7895122,
                        8777541, 8451277, 1302850,
                        8080152, 4562555, 5552012,
                        5050552, 7825877, 1250255,
                        1005231, 6545231, 3852085,
                        7576651, 7881200, 4581002};


    int userNumber;
    cout << "Please enter number to search:\n";
    cin >> userNumber;

   
    if(isFound(accounts, 18, userNumber))
        cout << userNumber << " is a valid number!\n";
    else
        cout << userNumber << " is not a valid number!\n";

   
    return 0;
}

bool isFound(const int numbers[], int arraySize, int userNumber){

    for(int counter = 0; counter < arraySize; counter ++){

        if(numbers[counter] == userNumber)
            return true;
    }
    return false;
}

