#ifndef CVETOR
#define CVETOR
#include <iostream>
using namespace std;


class Cvetor{
friend ostream &operator<<(ostream &, const Cvetor &);
friend istream &operator>>(istream &, Cvetor &);

private:
int tamanho;
int *vet;

public:
Cvetor(int = 10);
Cvetor(const Cvetor&);
int getSize() const;
bool operator<(const Cvetor &)const;
bool operator>(const Cvetor &)const;
bool operator >=(const Cvetor &)const;
bool operator<=(const Cvetor &)const;
bool operator ==(const Cvetor &)const;
bool operator !=(const Cvetor &)const;
void setVetor(int,int);
void setVetorUser(int);
};
#endif