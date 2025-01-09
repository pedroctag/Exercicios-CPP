#include <iostream>
#include <iomanip>
#include "comp.h"


using namespace std;

void Complexo::print() const
{

 cout<<a<<" + "<<b<<"i"<<endl;

 }

 Complexo::Complexo(){
 a=0;
 b=0;

 }

Complexo::Complexo(double a1, double b1):a(a1),b(b1){};

bool Complexo::operator==(const Complexo &x)const{
if(a==x.a && b==x.b)
    return true;
else
    return false;
}

bool Complexo::operator!=(const Complexo &x)const{
return !(*this == x);
}

void Complexo::soma(const Complexo &x){

a=a+x.a;
b=b+x.b;

}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 Complexo & Complexo::operator+( Complexo &x){

a=a+x.a;
b=b+x.b;

return (*this);
}

Complexo & Complexo::operator-(Complexo &x){

a=a-x.a;
b=b-x.b;


return (*this);
}

Complexo & Complexo::operator*(Complexo &x){

int aux;

a=aux;
a=(a*x.a)-(b*x.b);
b=(aux*x.b)+(b*x.a);
return (*this);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////




void Complexo::sub(const Complexo &x){

a=a-x.a;
b=b-x.b;

}
void Complexo::multi(const Complexo &x){

int aux;

a=aux;
a=(a*x.a)-(b*x.b);
b=(aux*x.b)+(b*x.a);
}

istream & operator>>(istream &input, Complexo &x){
    input>>x.a>>x.b;
     return input;
}

ostream &operator<<(ostream &output, const Complexo &x){
 output << x.a;
  if(x.b>= 0){
  output << " + ";
  }
else{
   output << " ";
  }

 output << x.b <<"i" << endl;
  return output;
}
