#ifndef DATA_H
#define DATA_H

#include <iostream>
using namespace std;


class Data{

friend ostream & operator<<(ostream &, const Data &);

private:
    int d,m,a;

public:

    Data(int, int, int);
    Data &operator++();
    Data operator++(int);

};

#endif // DATA_H
