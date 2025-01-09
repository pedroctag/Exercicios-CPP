#ifndef PRESIDENTE_H
#define PRESIDENTE_H
#include "politico.h"
using namespace std;

class Presidente : public Politico
{

public:
    Presidente(const char * const, const char * const, const char * const, int);
    void imprimenum(Politico);

private:
    int num;

};







#endif // PRESIDENTE_H

