# include <iostream>
# include "retangulo.h"
using namespace std;


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
cin>>altura;
cout<<"selecione a largura: "<<endl;
cin>>largura;


}

void Retangulo::display(){

    cout << "a largura 1 eh: " << getLargura() << endl;
    cout << "a altura 1 eh: " << getAltura() << endl;
    cout << "a area 1 eh: " << calcArea() << endl<<"\n";

}
