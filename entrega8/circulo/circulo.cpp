#include <iostream>
#include "circulo.h"
using namespace std;

istream &operator>>(istream &input, Circulo &x){
     input>>x.x>>x.y;}

ostream &operator<<(ostream &output, const Circulo &x){

output<<x.raio<<" ";
output<<x.x<<" "<<x.y;

}



Circulo::Circulo(){

raio=1;
x=1;
y=1;

}

    double Circulo::Area(){

    return 3.1415*raio*raio;

    }
    int Circulo::getRaio(){

    return raio;


    }
    void Circulo::setRaio(int x){

    raio=x;

    }

void Circulo::out(){
cout << x << "|" << y << endl;
}
void Circulo::reset(){
x=1;
y=1;
}

Circulo &Circulo :: operator++(){
++x;
++y;
return *this;
}

Circulo Circulo ::  operator++(int){
Circulo temp = *this;
x++;
y++;
return temp;
}
Circulo &Circulo :: operator--(){
--x;
--y;
return *this;
}

Circulo Circulo ::  operator--(int){
Circulo temp = *this;
x--;
y--;
return temp;
}
