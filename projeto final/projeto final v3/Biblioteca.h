#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <list>
#include <string>
#include "emprestimos.h"
#include "usuarios.h"
#include "itens.h"

using namespace std;

class Biblioteca{
private:

list<Usuario>usuarios;
list<Itens>itens;

list<Usuario>::iterator obj;
list<Itens>::iterator it;


public:

    Biblioteca();
    void emprestar(string, int, string, int);
    void devolver();
    void renovar();
    void criar();
    void imprime();

};

#endif // BIBLIOTECA_H
