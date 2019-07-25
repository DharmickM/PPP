/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    bool init = true;
    double m_cm=100, in_cm=2.54,ft_in=12;
    double small, large, a;
    string unit;

    while (cin >> a >> unit) {
        cout << a << "\n";
        if (unit == "m"){
            a=a;
        }
        else if (unit == "cm"){
            a=a/m_cm;
        }
        else if (unit == "in"){
            a=(a*in_cm)/m_cm;
        }
        else if (unit == "ft"){
            a=(a*ft_in*in_cm)/m_cm;
        }
        else {
            cout << "invalid unit";
        }
        
        
        //************************************ int comparison
        if (init) { 
            small = a;
            large = a;
            init = false;
        } else if (a < small) {
            cout << "The smallest so far\n";
            small = a;
        } else if (a > large) {
            cout << "The largest so far\n";
            large = a;
        }
    }
    // keep_window_open();
    return 0;
}

