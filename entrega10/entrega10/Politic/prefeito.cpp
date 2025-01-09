#include <iostream>
#include "prefeito.h"
#include "politico.h"

Prefeito::Prefeito(const char * const primeiro, const char * const segundo, const char * const par, int x):Politico(primeiro,segundo,par)
{

nu=x;
cout<<endl<<"estou construindo um governador"<<endl;

}


void Prefeito::Imprime(){

Politico::Imprime();
cout << nu;

}
