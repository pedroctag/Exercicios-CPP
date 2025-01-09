#ifndef EMPRESTIMOS_H
#define EMPRESTIMOS_H
#include "usuarios.h"
#include "itens.h"


class Emprestimos{
private:
   string Usuario;
   int Itens;
   string data;
   int estado;

public:
    Emprestimos(string, int, string, int);
};

#endif // EMPRESTIMOS_H
