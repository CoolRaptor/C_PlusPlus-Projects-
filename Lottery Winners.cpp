#include <iostream>
#include <iomanip> //to format output
using namespace std;

//function prototypes
bool isFound(const int [], int, int);

int main()
{
  
    int playedNumbers[10] = {13579, 26791, 26792, 33445, 55555,
                             62483, 77777, 79422, 85647, 93121};

  
    int winningNumber;
    cout << "Please enter this weeks winning number:\n";
    cin >> winningNumber;


    if(isFound(playedNumbers, 10, winningNumber))
        cout << "You have won!\n";
    else
        cout << "You didn't win this week!\n";


    return 0;
}

bool isFound(const int numbers[], int arraySize, int winningNumber){

    for(int counter = 0; counter < arraySize; counter ++){

        if(numbers[counter] == winningNumber)
            return true;
    }
    return false;
}
