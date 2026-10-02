#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //VARIABLE DECLARATION
    long long bytes;
    double KB, MB, GB;

    cout << "********************BYTE CONVERSION PROGRAM********************" << '\n';
    
    //INPUT
    cout << "Enter a File Size in Bytes: ";
    cin >> bytes;

    //COMPUTATION
    KB = bytes / 1024.0;
    MB = bytes / 1048576.0;
    GB = bytes / 1073741824.0;

    //OUTPUT
    cout << fixed << setprecision(2) << '\n'
         << "KB: " << KB << '\n' 
         << "MB: " << MB << '\n'
         << fixed << setprecision(4)
         << "GB: " << GB << '\n'
         << "Whole MB: " << (int)MB << '\n';

    cout << "***************************************************************";


    return 0;
}