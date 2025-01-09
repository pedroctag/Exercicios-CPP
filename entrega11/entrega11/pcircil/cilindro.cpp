#include "cilindro.h"
#include <iostream>
using namespace std;

Cilindro::Cilindro(int a, int b, int r, int h)
         :Circulo(a, b, r)
{

altura=h;

}

void Cilindro::print(){

Circulo::print();
cout<<endl<<"a altura eh: "<<altura;

}

double Cilindro::volume(){

return Circulo::area()*altura;

}
