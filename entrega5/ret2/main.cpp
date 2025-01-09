#include <iostream>
#include "retangulo.h"
#include "retangulofriend.h"


using namespace std;


int main()
{

Retangulo ret1(5,2);
Retangulo *ret2 = new Retangulo(2,3);
Retangulofriend ret;

ret1.display();

cout << "a area eh: " << are(ret1) << endl;
cout << "o perimetro eh: "<< ret.calper(ret1) << endl<<endl;

ret1.setAltura(7).setLargura(5).display();

cout << "a area eh: " << are(ret1) << endl;
cout << "o perimetro eh: "<< ret.calper(ret1) << endl<<endl;

ret2->display();

cout << "a area eh: " << are(*ret2) << endl;
cout << "o perimetro eh: "<< ret.calper(*ret2) << endl;


    return 0;

}
