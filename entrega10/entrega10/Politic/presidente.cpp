#include <iostream>
#include "presidente.h"
#include "politico.h"

Presidente::Presidente(const char * const primeiro, const char * const segundo, const char * const par, int x):Politico(primeiro,segundo,par)
{

num=x;
//cout<<endl<<"estou construindo um presidente"<<endl;

}


void Presidente::Imprime(){

Politico::Imprime();
cout << num;

}

