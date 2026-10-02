#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //VARIABLE DECLARATIONS
    int quantityOrdered, numStudents, serviceCharge;
    double mealPrice, finalBill, percentage, studentShare, subtotal;

    cout << "********************PRICE COMPUTATION PROGRAM********************" << '\n';
   
    //INPUT
    cout << "Meal Price: ";
    cin >> mealPrice;
    cout << "Quantity: ";
    cin >> quantityOrdered;
    cout << "Service-charge Percentage: ";
    cin >> serviceCharge;
    cout << "Number of Students: ";
    cin >> numStudents;

    //COMPUTATION
    subtotal = mealPrice * quantityOrdered;
    percentage = subtotal * (serviceCharge / 100.0);
    finalBill = subtotal + percentage;
    studentShare = finalBill / numStudents;

    //OUTPUT
    cout << fixed << setprecision(2) << '\n'
         << "Subtotal: " << subtotal << '\n'
         << "Service Charge: " << percentage << '\n'
         << "Final Bill: " << finalBill << '\n'
         << "Student Share: " << studentShare << '\n';

    cout << "*****************************************************************";

    return 0;
}