#ifndef PREFEITO_H
#define PREFEITO_H
#include "politico.h"
using namespace std;

class Prefeito : public Politico
{

public:
    Prefeito(const char * const, const char * const, const char * const, int);
    void imprimenu(Politico);

private:
    int nu;
};







#endif // PREFEITO_H
