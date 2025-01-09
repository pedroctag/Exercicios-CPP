#include "cachorro.h"
#include <iostream>
#include <string>

using namespace std;

Cachorro::Cachorro( const string &c, const string &o, const string &f, const string &r)
      :Animal(c)
{

ordem=o;
familia=f;
raca=r;

}

void Cachorro::print(){

Animal::print();
cout<<"a ordem eh: "<<ordem<<endl;
cout<<"a familia eh: "<<familia<<endl;
cout<<"a raca eh: "<<raca<<endl;

}

void Cachorro::move(){

cout<<"Correndo..."<<endl;

}

 void Cachorro::emitirSom(){

 cout<<"Au Au.."<<endl<<endl;

 }

void Cachorro::seta( const string &s, const string &a, const string &b, const string &c){

classe=s;
ordem=a;
familia=b;
raca=c;

}
