#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()

{
	
int kidTickets, adultTickets; // to hold ticket numbers

string filmTitle; // to hold film title

cout << "What film was shown? ";
getline(cin, filmTitle);


cout << "How many child tickets were sold? ";
cin >> kidTickets;

cout << "How many adult tickets were sold? ";
cin >> adultTickets;

double kidSales = kidTickets * 6; // calculate money from child tickets

double adultSales = adultTickets * 10; // calculate money from adult tickets

double grossProfit = adultSales + kidSales; // calculate total from tickets sales

double distribFees = grossProfit * 0.07; // 7% fee paid to distributors

double netProfit = grossProfit - distribFees; // calculate net profit

cout << "Movie Name:" << setw(31) << filmTitle << endl;
cout << "Adult Tickets Sold:" << setw(21) << adultTickets << endl;
cout << "Child Tickets Sold:" << setw(21) << kidTickets << endl;
cout << setprecision(2) << fixed;
cout << "Gross Box Office Profit:        $" << setw(9) << grossProfit << endl;
cout << "Net Box Office Profit:          $" << setw(9) << netProfit << endl;
cout << "Amount Paid to Distributors :   $" << setw(9) << distribFees << endl;

return 0;
	
}
