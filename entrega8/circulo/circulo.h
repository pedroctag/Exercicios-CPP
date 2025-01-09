#ifndef CIR_H
#define CIR_H
using namespace std;
#include <iostream>

class Circulo{

friend istream &operator>>(istream &, Circulo &);
friend ostream &operator<<(ostream &, const Circulo &);


private:
    double raio;
    int x,y;

public:
    Circulo();
    double Area();
    int getRaio();
    void setRaio(int);
    Circulo(int, int);
    void out();
    Circulo & operator++();//pré
    Circulo  operator++(int);//pós
    Circulo & operator--();//pré
    Circulo  operator--(int);//pós
    void reset();

};


#endif // CIR_H

