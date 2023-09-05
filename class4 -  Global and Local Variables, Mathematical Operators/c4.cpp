#include <iostream>
using namespace std;

int n1, n2; // Global Variables

int main () {

    // Mathematical Operators: + - / * % ()

    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Global and Local Variables, Mathematical Operators " << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "" << endl;

    int n3, n4; // Local Variables
    int res1;
    int res2;
    int res3;
    int res4;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;
    
    res1 = n1 + n2 + n3 + n4;
    res2 = (n1 + n2) * n4;
    res3 = n1 / n2;
    res4 = n1 % n2;
    

    cout << "Sum of all variables: " << res1 << "\n\n";
    cout << "Res value: " << res2 << "\n\n";
    cout << "Division: " << res3 << "\n\n";
    cout << "Rest: " << res4 << "\n\n";

     cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n" << endl;


    return 0;
}