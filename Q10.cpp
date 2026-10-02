#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

    //VARIABLE DECLARATIONS
    double unitPrice, discountPercent;
    int quantity, shippingFee, units;
    string productName;
    double subtotal, discountAmount, discountMerch, exactBoxes, shippingTotal, amountDue;
    int boxesReq;

    cout << "********************ONLINE STORE INVOICE********************" << '\n';

    //INPUTS
    cout << "Product: ";
    getline(cin, productName);
    cout << "Unit Price: ";
    cin >> unitPrice;
    cout << "Quantity: ";
    cin >> quantity;
    cout << "Discount Percentage: ";
    cin >> discountPercent;
    cout << "Shipping (per box): ";
    cin >> shippingFee;
    cout << "Units (per box): ";
    cin >> units;

    //COMPUTATION
    subtotal = unitPrice * quantity;
    discountAmount = subtotal * (discountPercent / 100.0);
    discountMerch = subtotal - discountAmount;
    exactBoxes = quantity / (double)units;
    boxesReq = ceil(exactBoxes);
    shippingTotal = boxesReq * shippingFee;
    amountDue = discountMerch + shippingTotal;

    //OUTPUT
    cout << "\n==================================================\n"
         << "                     RECEIPT                        "
         << "\n==================================================\n";

    cout << "Product:\t" << productName << '\n'
         << fixed << setprecision(2) << '\n'
         << "Subtotal:\t" << subtotal << '\n'
         << "Discount:\t" << discountAmount << '\n'
         << "Merchandise:\t" << discountMerch << '\n'
         << "Exact Boxes:\t" << exactBoxes << '\n'
         << "Boxes Required:\t" << boxesReq << '\n'
         << "Shipping:\t" << shippingTotal << '\n'
         << "Amount Due:\t" << amountDue << '\n';

    cout << "==================================================\n";

    cout << "\n**********************************************************************";

    return 0;
}