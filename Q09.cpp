#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //VARIABLE DECLARATIONS
    double baseTuition, feePercent;
    int downPayment, numMonthly;
    double processingFee, adjustedTuition, balance, monthly;

    cout << "********************TUITION INSTALLMENT CALCULATOR********************" << '\n';

    //INPUT
    cout << "Base Tuition: ";
    cin >> baseTuition;
    cout << "Processing-Fee Percentage: ";
    cin >> feePercent;
    cout << "Down Payment Amount: ";
    cin >> downPayment;
    cout << "Number of Monthly Installments: ";
    cin >> numMonthly;

    //COMPUTATION
    processingFee = baseTuition * (feePercent / 100.0);
    adjustedTuition = baseTuition + processingFee;
    balance = adjustedTuition - downPayment;
    monthly = balance / numMonthly;

    //OUTPUT
    cout << fixed << setprecision(2) << '\n'
         << "Processing Fee: " << processingFee << '\n'
         << "Adjusted Tuition: " << adjustedTuition << '\n'
         << "Balance: " << balance << '\n'
         << "Monthly: " << monthly << '\n';

    cout << "**********************************************************************";

    return 0;
}