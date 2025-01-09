#ifndef RETANGULO_H
#define RETANGULO_H

    class Retangulo{
private:
    int largura=1,altura=1;
public:
    //Retangulo();
    void display();
    void setAltura(int);
    void setLargura(int);
    int getAltura();
    int getLargura();
    int calcArea();
    void useratributos();

    };




#endif // RETANGULO_H
