#include "usuario.h"
#include "comum.h"
#include <iostream>
using namespace std;

comum::comum(int d, string a, string b, string c)
              :usuario(d,a,b,c){}

 void comum::estapunido(int a){
l=leitor.find(a);

if(l->second==1)
    cout<<endl<<"O leitor "<<a <<" esta punido";
else
    cout<<endl<<"O leitor "<<a<<" nao esta punido";

 }

void comum::imprime(){

cout<<endl<<endl<<"Usuario comum n. ";
usuario::imprim();

}
