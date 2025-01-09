#ifndef USUARIO_H
#define USUARIO_H
#include <list>
#include <string>

using namespace std;

class Usuario{
private:

string nome;
string login;
string senha;
list<int>Emprestimos;

public:

Usuario(string, string, string);
void Imprime();
void estaPunido();


};

#endif // USUARIO_H

