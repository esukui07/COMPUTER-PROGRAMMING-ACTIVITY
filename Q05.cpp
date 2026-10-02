#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    //VARIABLE DECLARATION
    int attendees, tableSeats;
    int tablesReq, totalSeats, unusedSeats;
    double exactTables;

     cout << "********************CONFERENCE SEATING PLANNER********************" << '\n';

    //INPUT
    cout << "Number of Attendees: ";
    cin >> attendees;
    cout << "Seats per Table: ";
    cin >> tableSeats;

    //COMPUTATION
    exactTables = (double)attendees / tableSeats;
    tablesReq = ceil(exactTables);
    totalSeats = tablesReq * tableSeats;
    unusedSeats = totalSeats - attendees;

    //OUTPUT
    cout << fixed << setprecision(2) << '\n'
         << "Exact Tables: " << exactTables << '\n'
         << "Tables Required: " << tablesReq << '\n'
         << "Total Seats: " << totalSeats << '\n'
         << "Unused Seats: " << unusedSeats << '\n';

    cout << "******************************************************************";

    return 0;
}