#include <iostream>
#include "polinomio.h"

using namespace std;
using std::ostream;
using std::istream;

///////////////////////////////////////////
ostream & operator<<(ostream &output ,const Polinomio &x){

for(int i=x.n; i>=0; i--){

if(i==0)
   output<<x.v[i]<<"x^"<<i;
else
if( x.v[i]!=0 )
    output<<x.v[i]<<"x^"<<i<<" + ";


    }
    return output;
}

istream & operator>>(istream &input , Polinomio &x){

cout<<"entre com a ordem n"<<endl;
input>>x.n;
cout<<"entre com os valores dos monomios, com maior grau primeiro"<<endl;

for(int i=x.n; i>=0; i--){
        input>>x.v[i];
    }
    return input;
}

////////////////////////////////////////////
Polinomio::Polinomio(){

for(int i=0;i<10;i++){
    v[i]=0;
    }

};
Polinomio Polinomio::operator+(const Polinomio &x){

Polinomio temp;
for(int i=0;i<maxOrder;i++){

   temp.v[i]=x.v[i]+v[i];

    }
    if(n>x.n)
        temp.n=n;
    else
        temp.n=x.n;

    return temp;
}

Polinomio Polinomio::operator-(const Polinomio &x){


Polinomio temp;
for(int i=0;i<maxOrder;i++){

   temp.v[i]=x.v[i]-v[i];

    }
    if(n>x.n)
        temp.n=n;
    else
        temp.n=x.n;
    return temp;
}


