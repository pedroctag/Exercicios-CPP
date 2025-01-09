#ifndef RETANGULO_H
#define RETANGULO_H

    class Retangulo{
private:
    int largura,altura;
public:
    Retangulo(int, int);
    void setAltura(int);
    void setLargura(int);
    int getAltura();
    int getLargura();
    int calcArea();
    void useratributos();

    };




#endif // RETANGULO_H
