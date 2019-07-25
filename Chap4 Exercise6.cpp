/*
“Make a vector holding the ten string values "zero", "one", . . . "nine".
Use that in a program that converts a digit to its corresponding spelled-out
value; e.g., the input 7 gives the output seven. Have the same program,
using the same input loop, convert spelled-out numbers into their
digit form; e.g., the input seven gives the output 7.”

Excerpt From: Bjarne Stroustrup. “Programming: Principles and Practice Using C++ (2nd Edition).” Apple Books.
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
// Guessing game
int main()
{
  vector<string> number_name,numbers;
  string input;

  number_name.push_back("zero");
  number_name.push_back("one");
  number_name.push_back("two");
  number_name.push_back("three");
  number_name.push_back("four");
  number_name.push_back("five");
  number_name.push_back("six");
  number_name.push_back("seven");
  number_name.push_back("eight");
  number_name.push_back("nine");

  numbers.push_back("0");
  numbers.push_back("1");
  numbers.push_back("2");
  numbers.push_back("3");
  numbers.push_back("4");
  numbers.push_back("5");
  numbers.push_back("6");
  numbers.push_back("7");
  numbers.push_back("8");
  numbers.push_back("9");

  cout << "enter a number either in string format or char\n";


  cin >> input;


  for (int i=0;numbers.size();i++){
    if (numbers[i]==input){
    cout << number_name[i] << endl;
  }
  else if (number_name[i]==input)
  cout << numbers[i] <<endl;


  }






  }




/*****************************************
Guessing Game:
Premise: User thinks of a number between 1-100 and the programme tries to guess number.

Guess = 50
min=0;
max=100;

if guess is larger then we need to make min=guess and guess=min+(max-min)/2
min=50;
guess=(100-50)/2=25


*/
