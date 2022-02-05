#include <iostream>

using namespace std;

int main()
 {
    int numbers[10];
    int lowest, highest;

    for(int num = 0; num < 10; num++){
        cout << "Enter number " << num + 1 << ": " << endl;
        cin >> numbers[num];
    }

    lowest = numbers[0];
    highest = numbers[0];

    for(int num = 0; num < 10; num++){

        if(numbers[num] < lowest)
            lowest = numbers[num];

        if(numbers[num] > highest)
            highest = numbers[num];
    }

    cout << "The lowest number entered is: " << lowest << endl;
    cout << "The highest number entered is: " << highest << endl;

    return 0;
 }
