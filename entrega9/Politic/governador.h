#ifndef GOVERNADOR_H
#define GOVERNADOR_H
#include "politico.h"
using namespace std;

class Governador : public Politico
{

public:
    Governador(const char * const, const char * const, const char * const, int);
    void imprimen(Politico);

private:
    int n;

};







#endif // GOVERNADOR_H


