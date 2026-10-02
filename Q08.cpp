#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    cout << "********************ENVIRONMENTAL SENSOR SUMMARY********************" << '\n';

    //VARIABLE DECLARATION
    double t1, t2, t3;
    double average, absoluteDiff;

    //INPUT
    cout << "Enter T1: ";
    cin >> t1;
    cout << "Enter T2: ";
    cin >> t2;
    cout << "Enter T3: ";
    cin >> t3;

    //COMPUTATION
    average = (t1 + t2 + t3) / 3;
    absoluteDiff = abs(t1 - t3);

    //OUTPUT
    cout << fixed << setprecision(3) << '\n'
         << "Average: " << average << '\n'
         << "|T1 - T3|: " << absoluteDiff << '\n'
         << fixed << setprecision(0)
         << "Floor: " << floor(average) << '\n'
         << "Ceil: " << ceil(average) << '\n'
         << "Trunc: " << trunc(average) << '\n'
         << "Round: " << round(average) << '\n';

    cout << "********************************************************************";

    return 0;
}