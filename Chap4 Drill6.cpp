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
    double small, large, a;

    while (cin >> a) {
        cout << a << "\n";
        if (init) { // this boolean if statement is true the first time where it sets both large and small to a, in a second iteration it will
            small = a;// compare a to large and small
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
