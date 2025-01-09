#include <iostream>
#include "periodico.h"
#include "livro.h"
#include "monografia.h"
#include "administrador.h"
#include "comum.h"
#include "emprestimo.h"

using namespace std;

int main()
{

periodico p(1,"Philosophia","Leo Vitor");
periodico m(2,"Projeto e desenvolvimento de sistemas sistematicos","Selton Farpas Mello");
periodico l2(3,"A Grande Historia da Evolucao","Richard Dawkins");


comum c1(1,"manoel","123321","manoel@jmail.com");
administrador a1(2,"Ed","0129384756","EddE@yehoo.com");

p.imprime();
l2.imprime();
m.imprime();
c1.imprime();
a1.imprime();


p.estaemprestado(2);
c1.estapunido(1);
a1.estapunido(2);

p.emprestar(2,2);
p.estaemprestado(2);

return 0;
}
