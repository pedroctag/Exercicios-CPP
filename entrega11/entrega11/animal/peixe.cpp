#include "peixe.h"
#include <iostream>
#include <string>

using namespace std;

Peixe::Peixe(const string &c, const string &o)
      :Animal(c)
{

ordem=o;

}

void Peixe::print(){

Animal::print();
cout<<"a ordem eh: "<<ordem<<endl;

}

void Peixe::move(){

cout<<"nadando..."<<endl;

}

 void Peixe::emitirSom(){

 cout<<"blob blob..??"<<endl<<endl;

 }

void Peixe::seta( const string &s, const string &a){

classe=s;
ordem=a;

}
