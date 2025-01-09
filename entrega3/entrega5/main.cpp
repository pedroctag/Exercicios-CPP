#include <iostream>
#include "retangulo.h"
#include "retangulofriend.h"


using namespace std;

int main()
{
    int a=0;

Retangulo ret3;
Retangulofriend ret;
Retangulo *ret2 = new Retangulo;

ret3.setAltura(7).setLargura(5).display();

cout << "a area eh: " << are(ret3) << endl<<"\n";
cout << "o perimetro eh: "<< ret.calper(ret3) << endl;


ret2->display();
    return 0;

}
