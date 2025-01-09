#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <string>
#include <map>
using namespace std;


class Biblioteca{

protected:

    multimap <int, string> usuarios;
    multimap <int, string> itens;

    multimap<int,string>::iterator usua;
    multimap<int,string>::iterator ite;


    map<int, int> leitura;
    map<int, int>::iterator p;

    public:

    Biblioteca();

    virtual void emprestar(int, int);
    void devolver(string, string);
    void renovar(string, string);

};

#endif // BIBLIOTECA_H
