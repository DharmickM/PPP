/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int
main ()
{
  int a, b;
  const string small = "the smaller value is:";
  const string large = "the larger value is:";
  while (cin >> a >> b)
    {
      if (a == b)
	{
	  cout << "numbers are equal";
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
