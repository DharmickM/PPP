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
  cout << "Please enter expression (we can handle+,–,*,and/)\n";
  cout << "add an x to end expression (e.g.,1+2*3x):";
  int lval=0;
  int rval;
  cin >> lval;//readleftmostoperand
  if(!cin) cout <<"no first operand";
  for(char op; cin >> op;){//readoperatorandright-handoperand
    //repeatedly
    if(op!='x')cin >> rval;
    if(!cin) cout << "no second operand";
    switch(op){
      case'+':
      lval += rval;//add:lval=lval+rval
      break;
      case'-':
      lval -= rval;//subtract:lval=lval–rval
      break;
      case'*':
      lval *= rval;//multiply:lval=lval*rval
      break;
      case'/':
      lval /= rval;//divide:lval=lval/rval
      break;
      default://notanotheroperator:printresult
      cout<<"Result:"<<lval<<'\n';
      return 0;
    }
  }
}

//ExcerptFrom:BjarneStroustrup.“Programming:PrinciplesandPracticeUsingC++(2ndEdition).”AppleBooks.
