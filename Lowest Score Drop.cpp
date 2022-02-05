#include <iostream>
using namespace std;

void getScore(double &);
void calcAverage(double, double, double, double, double);
double ifLowest(double, double, double, double, double);
double findLowest(double, double, double, double, double);

int main()
{
    double score1, score2, score3, score4, score5;

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}




void getScore(double &num)
{
    cout  << "What is the testscore: ";
    cin >> num;
    
    while(num < 0 || num > 100)
    {
    	cout << "Invalid score, please input a score between 0-100." << endl;
    	cin >> num;
	}
}


void calcAverage(double num1, double num2, double num3, double num4, double num5)
{
    double average,
           lowest = findLowest(num1, num2, num3, num4, num5);

     if (num1 == lowest)
         average = (num2 + num3 + num4 + num5) / 4;
     else if (num2 == lowest)
         average = (num1 + num3 + num4 + num5) / 4;
     else if (num3 == lowest)
         average = (num1 + num2 + num4 + num5) / 4;
     else if (num4 == lowest)
         average = (num1 + num2 + num3 + num5) / 4;
     else if (num5 == lowest)
         average = (num1 + num2 + num3 + num4) / 4;

    cout << "The average is: " << average << endl;
}

double ifLowest(double num1, double num2, double num3, double num4, double num5)
{
    double lowest;
    if (num1 <= num2)
    {
        if (num1 <= num3)
        {
            if (num1 <= num4)
            {
                if (num1 <= num5)
                {
                    lowest = num1;
                }
            }
        }
    }
    return lowest;
}


double findLowest(double num1, double num2, double num3, double num4, double num5)
{
    double smallest;

    smallest = ifLowest(num1, num2, num3, num4, num5);
    smallest = ifLowest(num2, num3, num4, num5, num1);
    smallest = ifLowest(num3, num4, num5, num1, num2);
    smallest = ifLowest(num4, num5, num1, num2, num3);
    smallest = ifLowest(num5, num1, num2, num3, num4);

    return smallest;
}
