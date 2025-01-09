#ifndef LIVRO_H
#define LIVRO_H

class livro:public item{

public:
    livro(int, string, string);
virtual void estaemprestado(int);
virtual void estareservado (int);
void imprime();

};

#endif // LIVRO_H
