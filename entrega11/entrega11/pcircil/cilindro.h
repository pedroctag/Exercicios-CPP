#ifndef CILINDRO_H
#define CILINDRO_H
#include "circulo.h"

class Cilindro:public Circulo{

private:
    int altura;

public:

    Cilindro(int,int,int,int);
    virtual void print();
    double volume();




};


#endif // CILINDRO_H
