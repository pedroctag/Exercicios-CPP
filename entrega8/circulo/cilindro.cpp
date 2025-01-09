#include <iostream>
#include "cilindro.h"
using namespace std;

ostream &operator<<(ostream &output, Cilindro &x){

output<<x.altura<<" "<<x.volume();

}

Cilindro::Cilindro(){

altura=1;

}

double Cilindro::volume(){

    return altura*Area();

    }

double Cilindro::getAltura(){

return altura;

    }

void Cilindro::setAltura(int c){

altura=c;

    }
