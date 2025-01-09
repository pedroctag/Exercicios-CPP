#include "item.h"
#include "monografia.h"
#include <iostream>
using namespace std;

monografia::monografia(int d, string a, string b)
           :item(d,a,b){}

 void monografia::estaemprestado(int a){



 }

 void monografia::estareservado (int a){



 }

void monografia::imprime(){

cout<<endl<<endl<<"Monografia n. ";
item::imprim();

}

