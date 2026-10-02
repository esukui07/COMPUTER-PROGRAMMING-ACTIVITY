#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    //VARIABLE DECLARATIONS
    int coats;
    double width, height, coverage;
    double wallArea, paintArea, cans, toBuy;

    cout << "********************PAINT CAN ESTIMATOR********************" << '\n';

    //INPUTS
    cout << "Wall Width: ";
    cin >> width;
    cout << "Wall Height: ";
    cin >> height;
    cout << "Number of Coats: ";
    cin >> coats;
    cout << "Coverage: ";
    cin >> coverage;

    //COMPUTATION
    wallArea = width * height;
    paintArea = wallArea * coats;
    cans = paintArea / coverage;

    //OUTPUT
    cout << fixed << setprecision(2) << '\n'
         << "Wall Area: " << wallArea << '\n'
         << "Total Paint Area: " << paintArea << '\n'
         << "Exact Cans: " << cans << '\n'
         << fixed << setprecision(0)
         << "Cans to Buy (ceil): " << ceil(cans) << '\n';

     cout << "***********************************************************";

    return 0;
}