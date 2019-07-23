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
  int max=100,min=0;
  int guess=50;
  char answer =' ';
  int count;
  cout << "Welcome to the guessing game, Think of a number between 1-100.\n";
  cout << "For every guess enter l(larger) if your number is larger, s(smaller) if it is smaller or c(correct) if its correct.\n";
  while (answer!='c'){
    cout << "Is your number:" << guess << endl;
    cin >> answer;
    count++;
    if (answer=='l') {
      min=guess;
      guess=min+(max-min)/2;
      cout <<guess;
    }
    else if (answer=='s'){
      max=guess;
      guess=max-(max-min)/2;
      cout << guess;
    }

  }
  cout << "It took me "<<count<<" guesses to get your number :)";
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
