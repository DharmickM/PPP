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


bool is_prime (vector<int> numbers, int number){
  for (int n=0;n<numbers.size(); ++n){
    if (number%numbers[n]==0){ return false;}
  }
  return true;
}



int main (){
  vector<int> numbers;
  for (int i=2;i<=100;++i){
    if (is_prime(numbers,i)) {
    numbers.push_back(i);
  }
  }
  for (int j=0;j<=numbers.size();++j){
  cout << numbers[j] << " ";
}


}
