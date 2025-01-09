#include "animal.h"
#include <string>
using namespace std;

Animal::Animal(const string &a){

classe=a;

}

void Animal::print(){

cout<<"a clase eh: "<<classe<<endl;

}

void Animal::seta( const string &s){

classe=s;

}
