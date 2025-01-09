#include <iostream>
#include "complex.h"
using namespace std;

int main() {
complex z1(3,4),z2(5,8);
 if(z2>z1)
   cout<<"z1 > z2"<<"\n";
  cout<< z1+z2;
complex z3(3,4),z4(5,8);
  if(z3!=z4)
   cout<<"z1 != z2"<<"\n";
  cout<<z3-z4;
complex z5(3,4),z6(3,4);
  if(z5==z6)
   cout<<"z1 = z2"<<"\n";
  cout<<z5*z6;
}
