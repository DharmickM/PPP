/*
“Write a program that performs as a very simple calculator.
Your calculator should be able to handle the four basic math operations —
add, subtract, multiply, and divide — on two input values. Your program
should prompt the user to enter three arguments: two double values and
a character to represent an operation. If the entry arguments are 35.6, 24.1,
and '+', the program output should be The sum of 35.6 and 24.1 is 59.7.
In Chapter 6 we look at a much more sophisticated simple calculator.”

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
  char oper;
  double a,b;
  cout << "Please enter 2 numbers followed by an operator (+,-,/,*)" << endl;
  cin >> a >> b >> oper;
  if (oper == '+' || oper == '-' || oper == '/' || oper == '*'){
  switch (oper) {
    case '+':
      cout << a<<"+"<<b<<"="<<a+b;
      break;
    case '-':
      cout << a<<"-"<<b<<"="<<a-b;
      break;
    case '/':
      cout << a<<"/"<<b<<"="<<a/b;
      break;
    case '*':
      cout << a<<"*"<<b<<"="<<a*b <<"\n";
      break;
    }
  }
  else cout << "error invalid operand \n";
  }
