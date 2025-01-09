#ifndef COMP_H
#define COMP_H

#include <iostream>
using namespace std;
using std::istream;
using std::ostream;

class Complexo{

private:
    double a;
    double b;
    double an;
    double bn;

public:

    friend ostream &operator<<(ostream &output, const Complexo &);
    friend istream &operator>>(istream &input,Complexo &);


    Complexo();
    Complexo(double a, double b);
    //
    void soma(const Complexo &);

    void multi(const Complexo &);

    void sub(const Complexo &);
    //

   void print() const;
    bool operator==(const Complexo &) const;
    bool operator!=(const Complexo &) const;
    bool operator>=(const Complexo &)const;
    bool operator<=(const Complexo &)const;
    bool operator>(const Complexo &)const;
    bool operator<(const Complexo &)const;

    Complexo &operator+(Complexo &);
    Complexo &operator-(Complexo &);
    Complexo &operator*(Complexo &);
};

#endif //COMP_H





//.cpp   complexo & complexo ::operator-(const complexo &x){}
//.h     const complexo & operator+(complexo);
