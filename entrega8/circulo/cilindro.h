#ifndef CIL_H
#define CIL_H
#include "circulo.h"
#include <iostream>
using namespace std;

class Cilindro : public Circulo
{

friend ostream &operator<<(ostream &,  Cilindro &);

private:
    double altura;

public:
    Cilindro();
    double volume();
    double getAltura();
    void setAltura(int);
    int getCentro();

};



#endif // CIL_H
