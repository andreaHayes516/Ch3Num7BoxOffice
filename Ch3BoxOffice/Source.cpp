/************************************************
** Author: Andrea Hayes
** Date: Febuary 28th, 2020
** Purpose: Figure theater's gross and net box office profit for a movie
** Input: Movie Name, Adult tickets, child tickets
** Processing: Total tickets sold, Box office profit and amount paid to distributor. 
** Output: Movie name, Adutlt tickets sold, child tickets sold, gross box office profit,
			net box office profit and amount paid to distributor.
*************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    
    string movieTitle; // Title of the Movie
    int adultTicketsSold, childTicketsSold; // Number of Tickets Sold
    
    cout << "Movie Name: ";
    getline (cin, movieTitle);
    cout << "Adult Tickets Sold: ";
    cin >> adultTicketsSold;
    cout << "Child Tickets Sold: ";
    cin >> childTicketsSold;

    double grossBoxOfficeProfit = (adultTicketsSold * 10) + (childTicketsSold * 6); // Total Profit for the Movie
    
    double netBoxOfficeProfit = grossBoxOfficeProfit * 0.2; // Box Office's Profit

    double amountPaidDistributor = grossBoxOfficeProfit - netBoxOfficeProfit; // Amount Paid to Distributor
    
    cout << left << setw(30) << "Movie Name: ";
    cout << movieTitle << endl;
    
    cout << left << setw(34) << "Adult Tickets Sold: ";
    cout << adultTicketsSold << endl;
    
    cout << left << setw(34) << "Child Tickets Sold: ";
    cout << childTicketsSold << endl;
    
    cout << fixed << setprecision(2) << showpoint;
    
    cout << left << setw(30) << "Gross Box Office Profit: ";
    cout << "$ ";
    cout << right << setw(8) << grossBoxOfficeProfit << endl;

    cout << left << setw(30) << "Net Box Office Profit: ";
    cout << "$ ";
    cout << right << setw(8) << netBoxOfficeProfit << endl;
    
    cout << left << setw(30) << "Amount Paid to Distributor: " ;
    cout << "$ ";
    cout << right << setw(8) << amountPaidDistributor << endl;
        
    return 0;
}