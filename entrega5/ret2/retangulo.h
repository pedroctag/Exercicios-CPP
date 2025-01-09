#ifndef RETANGULO_H
#define RETANGULO_H

    class Retangulo{

    friend int are (Retangulo &);
    friend class Retangulofriend;


private:
    int largura,altura;
public:

    Retangulo(int , int);
    void display();
    Retangulo& setAltura(int);
    Retangulo& setLargura(int);
    int getAltura();
    int getLargura();
    int calcArea();


    };




#endif // RETANGULO_H
