#include <iostream>
#include "retangulo.h"
using namespace std;

int main()
{
char s;
    Retangulo ret(1, 1);

    cout << "deseja mudar?s/n";
    cin >> s;

    if(s=='s'){
    ret.useratributos();}

    cout << "a largura eh: " << ret.getLargura() << endl;
    cout << "a altura eh: " << ret.getAltura() << endl;
    cout << "a area eh: " << ret.calcArea() << endl;


    return 0;

}
