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
    Cartesiano & operator++();//pré
    Cartesiano  operator++(int);//pós
    Cartesiano & operator--();//pré
    Cartesiano  operator--(int);//pós
    void reset();

};
#endif // CART_H
