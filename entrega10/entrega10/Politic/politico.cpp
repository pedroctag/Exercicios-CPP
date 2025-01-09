#include <iostream>
#include <string.h>
#include "politico.h"
using namespace std;

void Politico::Imprime(){

cout<<primeiroNome<<" "<<segundoNome<<endl<<"Partido: "<<partido<<endl;

}

Politico::Politico(const char * const primeiro, const char * const segundo, const char * const par){


    //cout<<endl<<"estou construindo um politico"<<endl;


    int l=strlen(primeiro);
    l=( l < 10 ? l : 9 );
    strncpy( primeiroNome, primeiro, l );
    primeiroNome[l]='\0';

    l=strlen(segundo);
    l=( l < 20 ? l : 19 );
    strncpy( segundoNome, segundo, l );
    segundoNome[l]='\0';

    l=strlen(partido);
    l=( l < 2 ? l : 0 );
    strncpy( partido, par, l );
    partido[2]='\0';

}



