#ifndef MONOGRAFIA_H
#define MONOGRAFIA_H

class monografia:public item
{
public:
    monografia(int, string, string);
    virtual void estaemprestado(int);
    virtual void estareservado (int);
    void imprime();
};

#endif // MONOGRAFIA_H

