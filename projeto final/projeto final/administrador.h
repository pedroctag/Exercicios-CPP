#ifndef ADM_H
#define ADM_H
#include "usuario.h"

class administrador:public usuario{

public:
    administrador(int, string, string, string);
    virtual void estapunido(int);
    void imprime();

};

#endif // ADM_H
