#include <iostream>
#include "Cvetor.h"
using namespace std;

int main() {
  Cvetor vet1(5);
  Cvetor vet2(5);
  Cvetor vet3(5);
   vet1.setVetorUser(10);
   vet2.setVetorUser(5);
   vet3.setVetorUser(5);


  cout <<"vetor 1: " << vet1 <<endl <<"vetor 2: "<< vet2 << endl << "vetor 3: " << vet3 << endl;
  
  if(vet1 > vet2){
    cout << "vet1 > vet2"<< endl;
  }

  if(vet1 < vet2){
    cout << "vet1 < vet2"<< endl;
    }

if(vet1 >= vet2){
    cout << "vet1 >= vet2"<< endl;
  }

  if(vet1 <= vet2){
    cout << "vet1 <= vet2"<< endl;
    }
  
  if(vet1 == vet2){
    cout << "vet1 == vet2"<< endl;
  }

  if(vet1 != vet2){
    cout << "vet1 != vet2"<< endl;
  }
if(vet1 > vet3){
    cout << "vet1 > vet3"<< endl;
  }

  if(vet1 < vet3){
    cout << "vet1 < vet3"<< endl;
    }

if(vet1 >= vet3){
    cout << "vet1 >= vet3"<< endl;
  }

  if(vet1 <= vet3){
    cout << "vet1 <= vet3"<< endl;
    }
  
  if(vet1 == vet3){
    cout << "vet1 == vet3"<< endl;
  }

  if(vet1 != vet3){
    cout << "vet1 != vet3"<< endl;
  }
  
  if(vet2 > vet3){
    cout << "vet2 > vet3"<< endl;
  }

  if(vet2 < vet3){
    cout << "vet2 < vet3"<< endl;
    }

if(vet2 >= vet3){
    cout << "vet2 >= vet3"<< endl;
  }

  if(vet2 <= vet3){
    cout << "vet2 <= vet3"<< endl;
    }
  
  if(vet2 == vet3){
    cout << "vet2 == vet3"<< endl;
  }

  if(vet2 != vet3){
    cout << "vet2 != vet3"<< endl;
  }
}