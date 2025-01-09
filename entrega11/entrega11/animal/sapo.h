#ifndef SAPO_H
#define SAPO_H
#include <string>
#include "animal.h"


class Sapo:public Animal{

private:
    string ordem,familia;

public:

    Sapo(const string &, const string &, const string &);
    virtual void print();
    virtual void move();
    virtual void emitirSom();
    virtual void seta(const string &,const string &,const string &);


};


#endif // SAPO_H

