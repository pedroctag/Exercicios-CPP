#ifndef POLINOMIO_H
#define POLINOMIO_H
#include <iostream>
using std::ostream;
using std::istream;
using std::cout;
#define maxOrder 10

class Polinomio{

    friend ostream & operator<<(ostream & ,const Polinomio &);
    friend istream & operator>>(istream & , Polinomio &);

private:
    int n;
    int v[maxOrder];

public:
    Polinomio();
    Polinomio operator+(const Polinomio &);
    Polinomio operator-(const Polinomio &);

};


#endif // POLINOMIO_H
