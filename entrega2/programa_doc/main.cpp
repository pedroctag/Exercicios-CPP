#include <iostream>
#include "CFracao.h"

using namespace std;

int main(){
int i=0,so=0,su=0,m=0,d=0;


//construtor padrão
cout<<"construtores"<<endl<<"f: ";
CFracao f;
f.Print();
cout<<endl;

//construtor com valores
CFracao f1(1,2);
cout<<"f1: ";
f1.Print();
cout<<endl;

CFracao ff(7,9);

//função get
CFracao fg(4,2);
cout<<"fg: ";
fg.Print();

cout<<endl<<"numerador e denominador: "<<fg.getDenominador()<<" e "<<fg.getNumerador()<<endl;

//maior, menor e igualdade
cout<<endl<<"teste de maior, menor e igualdade";
cout<<endl<<fg.MaiorQue(f1)<<f1.MaiorQue(fg)<<endl<<fg.MenorQue(f1)<<f1.MenorQue(fg)<<endl;
cout<<fg.Igual(f1)<<fg.Igual(fg);

if(fg.MaiorQue(f1)==1 && f1.MaiorQue(fg)==0 && fg.MenorQue(f1)==0 && f1.MenorQue(fg)==1 && fg.Igual(f1)==0 && fg.Igual(fg)==1)
i=1;

//aritimética
CFracao f2;

//// som
f2=fg.Somar(f1);
cout<<endl<<endl<<"Soma fg+f1"<<endl;
f2.Print();
cout<<endl;

if(f2.getDenominador()==2 && f2.getNumerador()==5)
    so=1;
else
    so=0;

f2=f.Somar(f1);
cout<<endl<<endl<<"Soma f+f1"<<endl;
f2.Print();
cout<<endl;

if(f2.getDenominador()==2 && f2.getNumerador()==3)
    so=1;
else
    so=0;

//// sub
f2=fg.Subtrair(f1);
cout<<endl<<endl<<"Subtracao fg-f1"<<endl;
f2.Print();
cout<<endl;

if(f2.getDenominador()==2 && f2.getNumerador()==3)
    su=1;
else
    su=0;

f2=f.Subtrair(f1);
cout<<endl<<endl<<"Subtracao f-f1"<<endl;
f2.Print();
cout<<endl;

if(f2.getDenominador()==2 && f2.getNumerador()==1)
    su=1;
else
    su=0;

//// mul
f2=fg.Multiplicar(f1);
cout<<endl<<endl<<"multiplicacao fg*f1"<<endl;
f2.Print();
cout<<endl;

if(f2.getDenominador()==1 && f2.getNumerador()==1)
    m=1;
else
    m=0;

f2=f.Multiplicar(f1);
cout<<endl<<endl<<"multiplicacao f*f1"<<endl;
f2.Print();
cout<<endl;

if(f2.getDenominador()==2 && f2.getNumerador()==1)
    m=1;
else
    m=0;

//// div
f2=fg.Dividir(f1);
cout<<endl<<endl<<"divisao fg/f1"<<endl;
f2.Print();
cout<<endl;

if(f2.getDenominador()==1 && f2.getNumerador()==4)
    d=1;
else
    d=0;

f2=f.Dividir(f1);
cout<<endl<<endl<<"divisao f/f1"<<endl;
f2.Print();
cout<<endl<<endl;

if(f2.getDenominador()==1 && f2.getNumerador()==2)
    d=1;
else
    d=0;

//Representacão float

ff.Print();
cout<<" como float eh: "<<ff.ComoFloat()<<endl;

if(so==su==m==d==1)
    cout<<endl<<"a aritietica esta correta"<<endl;

else
    cout<<endl<<"a aritietica nao esta correta"<<endl;
return 0;
}
