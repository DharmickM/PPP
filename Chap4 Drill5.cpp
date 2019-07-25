/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int
main ()
{
  double a, b;
  double tolerance= 1.0/100;
  const string small = "the smaller value is:";
  const string large = "the larger value is:";
  while (cin >> a >> b)
    {
      if (a == b)
	{
	  cout << "numbers are equal" << endl;
	}
	else if (abs(a-b)<=tolerance){
	    cout << "number are almost equal" << endl;
	}
      else if (a <= b)
	{
	  cout << small << a << " " << large << b << endl;

	}
      else
	{
	  cout << small << b << " " << large << a << endl;
	}
    }

  return 0;
}
