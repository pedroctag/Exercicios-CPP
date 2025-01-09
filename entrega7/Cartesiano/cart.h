#ifndef CART_H
#define CART_H
using namespace std;

class Cartesiano{

friend ostream &operator<<(ostream &, const Cartesiano &);

private:

    int x,y;

public:

    Cartesiano(int, int);
    void out();
    Cartesiano & operator++();//pr�
    Cartesiano  operator++(int);//p�s
    Cartesiano & operator--();//pr�
    Cartesiano  operator--(int);//p�s
    void reset();

};
#endif // CART_H
