#include <iostream>
#include "item.h"
#include "periodico.h"
using namespace std;

periodico::periodico(int d, string a, string b)
          :item(d,a,b){}

 void periodico::estaemprestado(int a){

p=leitura.find(a);

if(p->second!=1 && p->second!=2)
    cout<<endl<<"O periodico "<<a<< " nao esta nem emprestado nem reservado"<<" "<<p->first<<p->second<<leitura.size();
if(p->second==1)
    cout<<endl<<"O periodico "<<a<< " esta emprestado";
if(p->second==2)
    periodico::estareservado(a);

 }

 void periodico::estareservado (int a){

if(p->second==2)
 cout<<endl<<"O periodico "<<a<< " esta reservado";
 else
    periodico::estaemprestado(a);

 }

void periodico::imprime(){

cout<<endl<<endl<<"Periodico n. ";
item::imprim();
}

void periodico::emprestar(int a, int b){



}
