#include <iostream>
#include "biblioteca.h"
#include "usuario.h"
using namespace std;

usuario::usuario(int d,string n, string l, string s)

{
id=d;
nome=n;
login=l;
senha=s;

usuarios.insert(make_pair(d, n));
usuarios.insert(make_pair(d, l));
usuarios.insert(make_pair(d, s));
leitor.insert(make_pair(d,0));

}

void usuario::imprim(){

for(usua=usuarios.begin(); usua != usuarios.end(); ++usua){
    int k,nk,aux=0;

    k=usua->first;
    aux=k;



    if(nk!=k)
    cout<<usua->first<<":"<<endl;

    cout<<usua->second<<endl;
    nk=aux;
    }

}
