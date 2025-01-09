#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
using namespace std;
using std::string;

class Animal{

protected:
    string classe;

public:

    virtual void seta(const string &);
    Animal(const string &);
    virtual void print();
    virtual void move() = 0;
    virtual void emitirSom()=0;

};


#endif // ANIMAL_H
