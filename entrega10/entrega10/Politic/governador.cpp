#include <iostream>
#include "governador.h"
#include "politico.h"

Governador::Governador(const char * const primeiro, const char * const segundo, const char * const par, int x):Politico(primeiro,segundo,par)
{

n=x;
cout<<endl<<"estou construindo um governador"<<endl;

}


void Governador::Imprime(){

Politico::Imprime();
cout << n;

}

