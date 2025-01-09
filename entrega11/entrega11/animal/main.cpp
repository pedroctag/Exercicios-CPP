#include <iostream>
#include <string>
#include "peixe.h"
#include "sapo.h"
#include "cachorro.h"

using namespace std;

int main()
{
    Peixe a1("cordado","teleosteo");
    a1.print();
    a1.move();
    a1.emitirSom();


    Sapo a2("cordado","anuro","bufonidae");
    a2.print();
    a2.move();
    a2.emitirSom();

    Cachorro a3("cordado","carnivora","canideo","chow chow");
    a3.print();
    a3.move();
    a3.emitirSom();

    a1.seta("cordado","tetrapode");
    a1.print();

    a3.seta("cordados","carnivora","caniformes","shi tzu");
    a3.print();

    return 0;
}
