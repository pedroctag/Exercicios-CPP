#include "Array.h"
#include <iostream>

using namespace std;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::exit;

Array::Array(int tamarray){

tamanho=(tamarray > 0 ? tamarray : 10);
ptr=new int[tamanho];

for(int i=0; i<tamanho; i++)
    ptr[i]=0;

}

Array::Array(const Array &copia)
    :tamanho(copia.tamanho){
    ptr = new int[tamanho];

    for(int i=0; i<tamanho; i++)
        ptr[i] = copia.ptr[i];
}

Array::~Array(){

delete [] ptr;

}

int Array::getSize() const{

return tamanho;

}

const Array &Array::operator=(const Array &direita){

if(&direita != this){

    if(tamanho!=direita.tamanho){

        delete [] ptr;
        tamanho=direita.tamanho;
        ptr=new int[tamanho];

}
for (int i=0; i<tamanho; i++)
ptr[i]=direita.ptr[i];
}
return *this;}

bool Array::operator==(Array &direita) const{

if(tamanho != direita.tamanho)
    return false;

for (int i=0; i<tamanho; i++)
    if(ptr[i] != direita.ptr[i])
    return false;

    return true
}

int &Array::operator[](int subescreve){

if(subescreve <0 || subescreve >= tamanho){

    cerr<<"\nErro: Subescreve "<<subescreve<<" fora da faixa"<<endl;
    exit(1);
}
 return ptr[subescreve];
}

int Array::operator[](int subescreve) const{
if (subescreve <0 || subescreve >= tamanho){

    cerr<<"\nErro: Subescreve "<<subescreve<<" fora da faixa"<<endl;
    exit(1);
}
 return ptr[subescreve];
}

istream &operator>>(istream &input, Array &a){

for(int i=0; i<a.tamanho; i++)
input>>a.ptr[i];

return input;

}

ostream &operator<<(ostrea &output, const Array &a){

int i;

for(i=0; i<a.tamanho; i++){

    output<<setw(12) << a.ptr[i];

    if((i+1)% 4==0)
        output<<endl;

}

if(i%4 !=0)
    output<<endl;

return output;

}
