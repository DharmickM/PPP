/*
“There is an old story that the emperor wanted to thank the inventor of the game
of chess and asked the inventor to name his reward. The inventor asked for one
grain of rice for the first square, 2 for the second, 4 for the third, and so on,
doubling for each of the 64 squares That may sound modest, but there wasn’t that much rice in
the empire! WRITE A PROGRAM TO CALCULATE HOW MANY SQUARES ARE REQUIRED TO
GIVE THE INVENTOR AT LEAST 1000 GRAINS OF RICE, AT LEAST 1,000,000 GRAINS,
AND AT LEAST 1,000,000,000 GRAINS. You’ll need a loop, of course, and probably
an int to keep track of which square you are at, an int to keep the number of
grains on the current square, and an int to keep track of the grains on all
previous squares. We suggest that you write out the value of all your
variables for each iteration of the loop so that you can see what’s going on.”

Excerpt From: Bjarne Stroustrup. “Programming: Principles and Practice Using C++ (2nd Edition).” Apple Books.
*/

/*
1st square = 1 grain
2nd square = 2 grains
3rd square = 4 grains
grains=2^square
*/

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



int main () {
    for (int n = 1000; n <= 1000000000; n *= 1000) {
        int sum = 1, curr = 1, k = 1;
        while (sum < n) {
            ++k;
            curr *= 2;
            sum += curr;
        }
        cout << k << " squares are needed for " << n << " grains\n";
    }

    // keep_window_open();
    return 0;
}
