#include <iostream>
#include "Array.h"
using namespace std;

int main()
{

Array inteiros(3);
Array inteiros2;

cout<<"tamanho 1: "<<inteiros.getSize()<<"depois de inicializada"<<inteiros;
cout<<"tamanho 1: "<<inteiros2.getSize()<<"depois de inicializada"<<inteiros2;

cout<<endl<<"coloque 13 inteiros: "<<endl;
//cin>>inteiros>>inteiros2;

cout<<"matriz 1: "<<inteiros<<endl<<"matriz 2: "<<inteiros2<<endl;

if(inteiros != inteiros2)
    cout<<"inteiros 1 eh diferente de inteiros 2"<<endl;

Array inteiros3(inteiros);

cout<<"tamanho do inteiros 3: "<<inteiros3.getSize()<<endl;

cout<<"Colocando inteiros 1 no inteiros 2"<<endl;

inteiros=inteiros2;
cout<<"inteiros 1: "<<inteiros<<"inteiros 2: "<<inteiros2<<endl;

if(inteiros==inteiros2)
    cout<<"inteiros 1 e 2 sao iguais";

cout<<"inteiro 1 na posicao 3 eh: "<<inteiros[3];

cout<<"colocando 40 na posicao 3 do inteiro 1"<<endl;
inteiros[3]=40;
cout<<"inteiro 1 na posicao 3 eh: "<<inteiros[3];


cout<<"tentando colocar valor na posicao 50 (inexistente)"<<endl;
inteiros[50]=40;

return 0;
}
