#include <iostream>
#include "cart.h"
using namespace std;

ostream &operator<<(ostream & output, const Cartesiano &x){
output<<" "<<x.x<<" | "<<x.y<<" "<<endl;
}

Cartesiano::Cartesiano(int a, int b){
x=a;
y=b;
}

void Cartesiano::out(){
cout << x << "|" << y << endl;
}
void Cartesiano::reset(){
x=1;
y=1;
}

Cartesiano &Cartesiano :: operator++(){
++x;
++y;
return *this;
}

Cartesiano Cartesiano ::  operator++(int){
Cartesiano temp = *this;
x++;
y++;
return temp;
}
Cartesiano &Cartesiano :: operator--(){
--x;
--y;
return *this;
}

Cartesiano Cartesiano ::  operator--(int){
Cartesiano temp = *this;
x--;
y--;
return temp;
}
