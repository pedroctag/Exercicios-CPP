#ifndef GOVERNADOR_H
#define GOVERNADOR_H
#include "politico.h"
using namespace std;

class Governador : public Politico
{

public:
    Governador(const char * const, const char * const, const char * const, int);
    virtual void Imprime();

protected:
    int n;

};







#endif // GOVERNADOR_H


