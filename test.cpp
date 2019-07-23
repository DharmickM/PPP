// Chapter 04, exercise 04: guess a number from 1 to 100 in no more than 7 tries
#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>

using namespace std;
bool prime (vector<int> table, int number) {
    for (int i = 0; i < table.size(); ++i){
        if (number%table[i] == 0) { return false;}
      }
    return true;
}

int main () {
    vector<int> table;
    for (int n = 2; n <= 100; ++n)
        if (prime(table,n)) table.push_back(n);
    for (int n = 0; n < table.size(); ++n)
        cout << table[n] << " ";
    cout << endl;

    // keep_window_open();
    return 0;
}
