#ifndef USUARIO_H
#define USUARIO_H
#include "biblioteca.h"
#include <string>

class usuario:public Biblioteca{

protected:
    int id;
    string nome;
    string login;
    string senha;
    map<int, int> leitor;
    map<int, int>::iterator l;

public:
    usuario(int, string, string, string);
    virtual void estapunido(int)=0;
    void imprim();
};

#endif // USUARIO_H
