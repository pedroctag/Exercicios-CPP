#ifndef RETANGULO_H
#define RETANGULO_H
using namespace std;

    class Retangulo{
private:
    int largura,altura,id;
public:
    Retangulo(int largura=1 , int altura=1, int id=1){
    cout<<"retangulo criado"<<endl;
    };

    ~Retangulo(){
    cout<<"retangulo "<<id<<" destruido " <<endl;
    };
    void display();
    void setAltura(int);
    void setLargura(int);
    int getAltura();
    int getLargura();
    int calcArea();
    void useratributos(int);

    };
    class Trianguloret{
private:

    int co,ca,h;

public:

    void userset(int, int, int);
    int Teste();
    void Displayt();


};



#endif // RETANGULO_H

