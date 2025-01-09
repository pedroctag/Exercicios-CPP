# include <iostream>
#include <math.h>
# include "Ret.h"
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

void Retangulo::useratributos(int d){

int a,b;
cout<<"selecione a altura: "<<endl;
cin>>altura;
cout<<"selecione a largura: "<<endl;
cin>>largura;
id=d;

}

void Retangulo::display(){

    cout << "a largura eh: " << getLargura() << endl;
    cout << "a altura eh: " << getAltura() << endl;
    cout << "a area eh: " << calcArea() << endl<<"\n";

}


int Trianguloret::Teste(){

int a,b,c;

a=co*co;
b=ca*ca;
c=h*h;

    if((a)+(b)==c)
        {cout<<"eh triangulo retangulo"<<endl;

        return 1;
        }

    else {cout<<"nao eh triangulo retangulo";

    return 0;
    }
}
void Trianguloret::userset(int a, int b, int c){

co=a;
ca=b;
h=c;

}
void Trianguloret::Displayt(){

cout<<co<<endl<<ca<<endl<<h<<endl;

}
