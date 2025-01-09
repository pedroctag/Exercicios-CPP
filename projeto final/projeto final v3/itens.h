#ifndef ITENS_H
#define ITENS_H
#include <list>
#include <string>

using namespace std;


class Itens{

private:
    double id;
    string nome;
    string autores;

public:
    Itens(double, string, string);
    void Imprime();
    void estaEmprestado();
    void estaReservado();


};

#endif // ITENS_H
