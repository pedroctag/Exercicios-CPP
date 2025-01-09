#ifndef PERIODICO_H
#define PERIODICO_H
#include "item.h"

class periodico:public item{
protected:


public:
    periodico(int, string, string);
    virtual void estaemprestado(int);
    virtual void estareservado (int);
    virtual void emprestar(int, int);
    void imprime();
};

#endif // PERIODICO_H
