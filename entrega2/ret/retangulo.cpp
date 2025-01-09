# include <iostream>
# include "retangulo.h"
using namespace std;


Retangulo::Retangulo(int a, int b){
    altura=a;
    largura=b;
}
void Retangulo::setAltura(int a){

    altura=a;

}
void Retangulo::setLargura(int l){

    largura=l;

}
int Retangulo::getAltura(){

    return altura;

}

int Retangulo::getLargura(){

    return largura;

}

int Retangulo::calcArea(){

    return largura*altura;

}

void Retangulo::useratributos(){

int a,b;

cout<<"selecione a altura: "<<endl;
cin>>a;
cout<<"selecione a largura: "<<endl;
cin>>b;

    setAltura(a);
    setLargura(b);
}
