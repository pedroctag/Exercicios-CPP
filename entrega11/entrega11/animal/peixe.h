#ifndef PEIXE_H
#define PEIXE_H
#include <string>
#include "animal.h"


class Peixe:public Animal{

private:
    string ordem;

public:

    Peixe(const string &, const string &);
    virtual void print();
    virtual void move();
    virtual void emitirSom();
    virtual void seta(const string &,const string &);


};


#endif // PEIXE_H
