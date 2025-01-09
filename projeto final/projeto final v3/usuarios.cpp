#include "usuarios.h"
#include <iostream>

using namespace std;

Usuario::Usuario(string n, string l, string s){

nome=n;
login=l;
senha=s;

}

void Usuario::Imprime(){
cout<<nome<<"   "<<login<<"   "<<senha;

}
