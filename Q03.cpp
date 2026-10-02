#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //VARIABLE DECLARATIONS
    int baseFare, tollFee, bookingPercent, numPass;
    double distance, rate;
    double  distanceCharge, preFee, bookingFee, perPass, total;

cout << "********************RIDE SHARING COMPUTATION********************" << '\n';

    //INPUT
    cout << "Base Fare: ";
    cin >> baseFare;
    cout << "Distance (in km): ";
    cin >> distance;
    cout << "Rate (per km): ";
    cin >> rate;
    cout << "Toll Fee: ";
    cin >> tollFee;
    cout << "Booking-fee Percentage: ";
    cin >> bookingPercent;
    cout << "Passengers: ";
    cin >> numPass;

    //COMPUTATION
    distanceCharge = distance * rate;
    preFee = baseFare + distanceCharge + tollFee;
    bookingFee = preFee * (bookingPercent / 100.0);
    total = preFee + bookingFee;
    perPass = total / numPass;

    //OUTPUT
    cout << fixed << setprecision(2) << '\n'
         << "Distance Charge: " << distanceCharge << '\n'
         << "Pre-fee: " << preFee << '\n'
         << "Booking Fee: " << bookingFee << '\n'
         << "Total: " << total << '\n'
         << "Per Passenger: " << perPass << '\n';

     cout << "****************************************************************";

    return 0;
}