# include <iostream>
# include "retangulo.h"
using namespace std;

Retangulo::Retangulo(int a, int b){
largura=a;
altura=b;

}
int are(Retangulo &e){

return (e.largura* e.altura);

}
Retangulo &Retangulo::setAltura(int altura){

    this->altura=altura;
return *this;
}
Retangulo &Retangulo::setLargura(int largura){

    this->largura=largura;
return *this;
}
int Retangulo::getAltura(){

    return this ->altura;

}

int Retangulo::getLargura(){

    return this ->largura;

}

int Retangulo::calcArea(){

    return largura*altura;

}


void Retangulo::display(){

    cout << "a largura eh: " << getLargura() << endl;
    cout << "a altura eh: " << getAltura() << endl;


}
