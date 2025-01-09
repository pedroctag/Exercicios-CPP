#include <iostream>
#include "retangulo.h"


using namespace std;

int main()
{
    int a=0;

    cout<<"selecione o retangulo (1 a 5): ";
    cin>>a;

Retangulo ret[5];


    switch(a){
case 1:{
    ret[1].useratributos();
}
break;

case 2:{
    ret[2].useratributos();
    }
break;

case 3:{
    ret[3].useratributos();
    }
    break;

case 4:{
    ret[4].useratributos();
    }
    break;

case 5:{
    ret[5]->useratributos();
    }
    break;

 default:
     break;
}



ret[1].display();
ret[2].display();
ret[3].display();
ret[4].display();
ret[5].display();



    return 0;

}
