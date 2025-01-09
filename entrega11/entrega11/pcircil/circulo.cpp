#include "circulo.h"
#include <iostream>

using namespace std;

Circulo::Circulo(int b,int a ,int r)
        :Ponto( a ,  b)
{

raio=r;

}

void Circulo::print(){

cout<<endl<<endl<<"o centro ( x | y ) eh: "<<x<<" | "<<y<<endl<<"o raio eh: "<<raio;

}

double Circulo::area(){

return 2*raio*raio*3.1415;

}
