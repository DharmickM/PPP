/*
“In the drill, you wrote a program that, given a series of numbers,
found the max and min of that series. The number that appears the
most times in a sequence is called the mode. Create a program that
finds the mode of a set of positive integers”

Excerpt From: Bjarne Stroustrup. “Programming: Principles and Practice
Using C++ (2nd Edition).” Apple Books.

pseudocode:
create vector
take in numbers
sort numbers

finding mode:
we need to iterate through the vector to find the most repeated numbers
to do this we need nested for loops.

the first one iterates through the loop and holds the current value

the second one iterates through the rest of the loop and counts how many times the
number appears.

variables needed:
temp: which holds the temporary value in the first loop.
max: which holds the maximum times a number appears in the loop.
first:which holds the index the first time that number appears.
curr: which holds the index that the current iteration is accesing.


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

using namespace std; // [2,3,5,6,7,9,22,1,3,5]
                    //   t
int main() {

  vector<int> numbers;  //*****************************
  int number;              // Create vector, get user input and sort vector.
  int least,curr;
  while(cin>>number) numbers.push_back(number);

  least=numbers[0];
  for (int i=1; i<=numbers.size()-1;++i){
    if (numbers[i]<least) least=numbers[i];


    }
    cout << "The number: " << least << " is the smallest number in the list "<< endl;
    }



    
