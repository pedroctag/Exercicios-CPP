#include "itens.h"
#include <iostream>

using namespace std;

Itens::Itens(double i,string n, string a){

id=i;
nome=n;
autores=a;

}

void Itens::Imprime(){
cout<<id<<" - "<<nome<<": "<<autores;

}
