#ifndef PREFEITO_H
#define PREFEITO_H
#include "politico.h"
using namespace std;

class Prefeito : public Politico
{

public:
    Prefeito(const char * const, const char * const, const char * const, int);
    virtual void Imprime();

protected:
    int nu;
};







#endif // PREFEITO_H
