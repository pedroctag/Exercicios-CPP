#include <iostream>
#include "item.h"
#include "livro.h"
using namespace std;

livro::livro(int d, string a, string b)
      :item(d,a,b){}

 void livro::estaemprestado(int a){



 }

 void livro::estareservado (int a){



 }

void livro::imprime(){

cout<<endl<<endl<<"Livro n. ";
item::imprim();


}

