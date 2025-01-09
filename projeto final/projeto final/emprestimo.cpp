#include "emprestimo.h"

using namespace std;

Emprestimo::Emprestimo(int a, int b, string c){

emprestar(a,b);

}

void Emprestimo::emprestar(int a, int b){

Biblioteca::emprestar(a,b);

}
