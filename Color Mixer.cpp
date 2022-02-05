#include <iostream>
using namespace std;

int main()
{
    string color1, color2;

    cout << "Enter a primary color : ";
    cin >> color1;
    cout << "Enter another primary color : ";
    cin >> color2;
    
    
    if (color1 == "red" || color1 == "Red")
    {
        if (color2 == "blue" || color2 == "Blue")
        {
            cout << color1 << " & ";
            cout << color2 << " = purple.\n";
        }
        else if (color2 == "yellow" || color2 == "Yellow")
        {
            cout << color1 << " & ";
            cout << color2 << " = orange.\n";
        }
    }
    else if (color1 == "blue" || color1 == "Blue")
    {
        if (color2 == "red" || color2 == "Red")
        {
            cout << color1 << " & ";
            cout << color2 << " = purple.\n";
        }
        else if (color2 == "yellow" || color2 == "Yellow")
        {
            cout << color1 << " & ";
            cout << color2 << " = green.\n";
        }
    }
    else if (color1 == "yellow" || color1 == "Yellow")
    {
        if (color2 == "red" || color2 == "Red")
        {
            cout << color1 << " & ";
            cout << color2 << " = orange.\n";
        }
        else if (color2 == "blue" || color2 == "Blue")
        {
            cout << color1 << " & ";
            cout << color2 << " = green.\n";
        }
    }
    else
    {
        cout << "\nRun the program and try again with primary colors.\n";
        cout << "A primary color is either Red, Blue, or Yellow.\n";
    }

	cout << endl;

    return 0;
}
