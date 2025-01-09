#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H
#include <iostream>
#include "periodico.h"
#include "livro.h"
#include "monografia.h"
#include "administrador.h"
#include "comum.h"

using namespace std;

class Emprestimo:public Biblioteca{

protected:
    int locador;
    int material;
    string expira;

public:
    Emprestimo(int , int , string );
    virtual void emprestar(int, int);
};
#endif // EMPRESTIMO_H
