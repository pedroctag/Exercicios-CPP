
#ifndef CACHORRO_H
#define CACHORRO_H
#include <string>
#include "animal.h"


class Cachorro:public Animal{

private:
    string ordem,familia,raca;

public:

    Cachorro( const string &, const string &, const string &, const string &);
    virtual void print();
    virtual void move();
    virtual void emitirSom();
    virtual void seta(const string &,const string &,const string &,const string &);


};


#endif // CACHORRO_H
