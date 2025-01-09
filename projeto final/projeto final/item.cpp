#include <iostream>
#include "item.h"
#include "biblioteca.h"
using namespace std;

item::item(int d, string a, string b){

itens.insert(make_pair(d,a));
itens.insert(make_pair(d,b));
leitura.insert(make_pair(d,0));

}

void item::imprim(){

for(ite=itens.begin(); ite != itens.end(); ++ite){
    int k,nk,aux=0;

    k=ite->first;
    aux=k;

    if(nk!=k)
    cout<<ite->first<<":"<<endl;

    cout<<ite->second<<endl;
    nk=aux;
    }
}

void item::emprestar(int a, int b){

cout<<"chegou";

for(p=leitura.begin(); p != leitura.end(); ++p){

if(p->first==a)
  leitura.at(a)=1;

  else
    cout<<"pulou"<<leitura.size();}}





