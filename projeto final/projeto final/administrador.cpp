#include "usuario.h"
#include "administrador.h"
#include <iostream>
using namespace std;

administrador::administrador(int d, string a, string b, string c)
              :usuario(d,a,b,c){}

 void administrador::estapunido(int a){
l=leitor.find(a);

if(l->second==1)
    cout<<endl<<"O leitor "<<a <<" esta punido";
else
    cout<<endl<<"O leitor "<<a<<" nao esta punido";

 }

void administrador::imprime(){

cout<<endl<<endl<<"Usuario administrador n. ";
usuario::imprim();

}


