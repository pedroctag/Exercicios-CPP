#ifndef ITEM_H
#define ITEM_H
#include "biblioteca.h"

class item:public Biblioteca{

protected:
    int id;
    string nome;
    string autores;

public:

    item(int,string,string);
    virtual void emprestar(int, int);
    virtual void estaemprestado(int)=0;
    virtual void estareservado (int)=0;
    void imprim();

};
#endif // ITEM_H
