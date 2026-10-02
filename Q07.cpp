#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    //VARIABLE DECLARATION
    double x1, y1, x2, y2;
    double dx, dy, distance;

    cout << "********************DRONE DISTANCE CALCULATION********************" << '\n';

    //INPUT
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;

    //COMPUTATION
    dx = x2 - x1;
    dy = y2 - y1;
    distance = sqrt(pow(dx, 2) + pow(dy, 2));

    //OUTPUT
    cout << fixed << setprecision(3) << '\n'
         << "dx: " << dx << '\n'
         << "dy: " << dy << '\n'
         << "Distance: " << distance << '\n'
         << fixed << setprecision(0)
         << "Rounded Distance: " << round(distance) << '\n';

    cout << "******************************************************************";

    return 0;
}