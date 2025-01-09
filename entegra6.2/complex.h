#ifndef COMPLEX
#define COMPLEX
#include <iostream>
using namespace std;
using std::ostream;
using std::istream;

class complex{
public:
friend ostream &operator<<(ostream &output, const complex &);
friend istream &operator>>(istream &input, complex &);

complex();
complex(double a,double b);
double Getreal();
double Getimag();
void Sum(const complex &);
void Sub(const complex &);
void Mult(const complex &);
void Print() const;
bool operator==(const complex &) const;
bool operator!=(const complex &)const;
complex &operator+(complex&);
complex &operator-(complex&);
complex &operator*(complex&);
bool operator >=(const complex &)const;
bool operator <=(const complex &)const;
bool operator >(const complex &)const;
bool operator <(const complex &)const;

private:
 double real;
 double imag;
 double imagnew;
 double realnew;
};
#endif