#include "sapo.h"
#include <iostream>
#include <string>

using namespace std;

Sapo::Sapo(const string &c, const string &o, const string &f)
      :Animal(c)
{

ordem=o;
familia=f;

}

void Sapo::print(){

Animal::print();
cout<<"a odem eh: "<<ordem<<endl;
cout<<"a familia eh: "<<familia<<endl;
}

void Sapo::move(){

cout<<"Saltando..."<<endl;

}

 void Sapo::emitirSom(){

 cout<<"croac corac.."<<endl<<endl;

 }

 void Sapo::seta( const string &s, const string &a, const string &b){

classe=s;
ordem=a;
familia=b;

}
