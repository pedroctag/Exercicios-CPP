#include <iostream>
#include "prefeito.h"
#include "governador.h"
#include "presidente.h"
#include "politico.h"
using namespace std;

int main()
{
    Politico p1("thiago","aventura","PB");

    p1.Imprime();

    Presidente p2("caligula","verspasiano","IT", 12);

    p2.imprimenum(p2);

    Governador p3("augusto","filho neto jr.","SG",65);

    p3.imprimen(p3);

    Prefeito p4("julio","Nero","RO",91);

    p4.imprimenu(p4);
return 0;
}
