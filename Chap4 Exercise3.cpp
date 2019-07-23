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
  double large,small,mean,total;
  vector<double> distances;
  for (double distance;cin >> distance;) distances.push_back(distance);

  sort(distances.begin(),distances.end()); // sorts distances from smallest to largest
  for (int i=0; distances[i];i++) {
    total+=distances[i];
  }
  mean=total/distances.size();
  large=distances[distances.size()-1];
  small=distances[0];
cout << "total distance:" << total << "\n";
cout << "mean distance:" << mean << "\n";
cout << "greatest distance;" << large << "\n";
cout << "small distance;" << small << "\n";

}
