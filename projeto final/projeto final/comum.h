#ifndef COMUM_H
#define COMUM_H
#include "usuario.h"

class comum:public usuario
{
public:
    comum(int, string, string, string);
    virtual void estapunido(int);
    void imprime();

};

#endif // COMUM_H

