#include <iostream>
#include "Cvetor.h"
#include <iomanip>
using std::setw;
using namespace std;


Cvetor::Cvetor(int a){
  tamanho = a;
  vet = new int[a];
  
  for(int i=0;i<tamanho;i++)
    vet[i]=0;
}

Cvetor::Cvetor(const Cvetor &CvetorCopia)
:tamanho(CvetorCopia.tamanho)
{
  vet = new int[tamanho];
  for(int i =0;i<tamanho;i++){
    vet[i] = CvetorCopia.vet[i];
  }
}

int Cvetor::getSize() const{
return tamanho;
}

bool Cvetor::operator<(const Cvetor &x)const{
int i,sum1 = 0,sum2 = 0;
for(i=0;i<tamanho;i++){
    sum2 += x.vet[i];
    sum1 += vet[i];
  }
if(sum2 < sum1){
return true;
}else{
  return false;
}}

bool Cvetor::operator>(const Cvetor &x)const{
int i,sum1 = 0,sum2 = 0;
for(i=0;i<tamanho;i++){
    sum2 += x.vet[i];
    sum1 += vet[i];
  }
if(sum2 > sum1){
return true;
}else{
  return false;
}}

bool Cvetor::operator<=(const Cvetor &x)const{
int i,sum1 = 0,sum2=0;
for(i=0;i<tamanho;i++){
    sum2 += x.vet[i];
    sum1 += vet[i];
  }
if(sum2 < sum1 || sum2 == sum1){
return true;
}else{
  return false;
}}

bool Cvetor::operator>=(const Cvetor &x)const{
int i,sum1 = 0,sum2 = 0;
for(i=0;i<tamanho;i++){
    sum2 += x.vet[i];
    sum1 += vet[i];
  }
if(sum2 > sum1 || sum2 == sum1){
return true;
}else{
  return false;
}}

bool Cvetor::operator==(const Cvetor &x)const{
int i;
  if(tamanho != x.tamanho)
   return false;
  
  for(i=0;i<tamanho;i++){
    if(vet[i]==x.vet[i]){
    }else{
      return false;
    }
  }
return true;
  
}

bool Cvetor::operator!=(const Cvetor &x)const{
int i;
  if(tamanho != x.tamanho)
  return true;
  
  for(i=0;i<tamanho;i++){
    if(vet[i]==x.vet[i]){
    }else{
      return true;
    }
  }
return false;
}

void Cvetor::setVetor(int tam, int valor){
  vet[tam] = valor;
}

void Cvetor::setVetorUser(int z){
  int value;
  
  if(z != 0){
    for(int i=0;i< tamanho;i++){
  setVetor(i,z);
  }
    }else{
  for(int i=0;i< tamanho;i++){
  cout <<"vetor na posição "<< i <<": ";
    cin >> value;
  setVetor(i,value);
    } 
  } 
}

istream &operator>>(istream &input, Cvetor &x){

for(int i=0;i< x.tamanho;i++)
  input >> x.vet[i];

  return input;
}

ostream &operator<<(ostream &output,const Cvetor &x){

for(int i=0;i<x.tamanho;i++)
output<<" "<<x.vet[i];

return output;  
}