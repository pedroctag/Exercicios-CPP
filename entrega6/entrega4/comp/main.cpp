#include <iostream>
#include "comp.h"
using namespace std;

int main()
{
    double a,b;


    Complexo z(1,2), z2(1,2), z3(3,4),z4(1,2),z5(1,2);
    cout<<"z1: "<<z;
    //z.print();
    cout<<"z2: "<<z2;
    //z2.print();
    cout<<"z3: "<<z3;
   // z3.print();
    cout<<"z4: "<<z4;
    //z4.print();
    cout<<"z5: "<<z5;
    //z5.print();

    cout<<endl<<endl;

    z2=z2+z;
    //z2.soma(z);
    cout<<"z1+z2: "<<z2;
    //z2.print();

    z=z-z3;
    z.sub(z3);
    cout<<"z1-z3: "<<z;
    //z.print();


    z5=z5*z4;
    z5.multi(z4);
    cout<<"z4*z5: "<<z5;
    //z5.print();

    return 0;
}
