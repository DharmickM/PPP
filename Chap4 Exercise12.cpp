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


int main (){
  vector<bool> prime;
  int max;
  cout << "Please enter max number and this programme will print out\nall prime numbers from 1-n \n";
  cin >> max;

  for (int i=0; i<=max;i++){
    prime.push_back(true);
  }
  cout << prime.size();



}
