// compute mean and median temperatures


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

int main()
{
  vector<double> numbers;
  for (double number;cin >> number;) numbers.push_back(number);

  sort(numbers.begin(),numbers.end());
  cout << "Median number is:" << numbers[numbers.size()/2] << endl;




}
