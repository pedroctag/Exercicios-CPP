#include <iostream>
#include "Ret.h"
using namespace std;

int main()
{
    int a,s;
cin>>s;
if(s==1){

Retangulo ret[5];

for(a=1;a<=5;a++){
if(a==1){
    ret[1].useratributos(1);
    a++;
}

if(a==2){
    ret[2].useratributos(2);
    a++;
    }

if(a==3){
    ret[3].useratributos(3);
    a++;
    }

if(a==4){
    ret[4].useratributos(4);
    a++;
    }

if(a==5){
    ret[5].useratributos(5);
    a++;
    }}


ret[1].display();
ret[2].display();
ret[3].display();
ret[4].display();
ret[5].display();}

if(s==0){

int co,ca,h,r;

cout<<"entre com o cateto oposto, adjacente e hipotenusa, respectativamente"<<endl;
cin>>co>>ca>>h;

Trianguloret tri;

tri.userset(co,ca,h);
r=tri.Teste();

if (r==1)
tri.Displayt();

}

    return 0;

}

