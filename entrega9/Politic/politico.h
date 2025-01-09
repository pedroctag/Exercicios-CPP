#ifndef POLITICO_H
#define POLITICO_H

class Politico{

public:
    Politico(const char * const, const char * const, const char * const);
    void Imprime() const;

private:


    char primeiroNome[10];
    char segundoNome[20];
    char partido[1];

};
#endif // POLITICO_H

