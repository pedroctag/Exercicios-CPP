#include <iostream>
#include "cart.h"

using namespace std;

int main()
{

    cout<<" x | y "<<endl<<" ====="<<endl;

    Cartesiano p1(2, 4);
    cout<<p1<<p1++<<p1<<++p1;

    cout<<endl<<p1<<p1--<<p1<<--p1;


    return 0;
}
