#include "Biblioteca.h"
#include "emprestimos.h"
#include <iostream>

using namespace std;

Biblioteca::Biblioteca(){

Usuario a("Marisa","mm@jmail.com","123");
Usuario b("Jimmy","londonrat@yehoo.com","321");
Usuario c("Tiago","cavalo@ig.com","132");
Usuario d("Manuel","noceu@coldmail.com","312");
Usuario e("Arthur","petroleo@inlook.com","213");
Usuario f("Ed","mortal@zorro.com","231");

usuarios.push_back(a);
usuarios.push_back(b);
usuarios.push_back(c);
usuarios.push_back(d);
usuarios.push_back(e);
usuarios.push_back(f);

Itens g(1,"Nacao dopamina","Anna Lembke");
Itens h(2,"A grande historia da evolucao","Richard Dawkins");
Itens i(3,"A filosofia e o mundo contemporaneo","Luis Felipe Ponde");
Itens j(4,"Sociedade do cansaco","Byung-Chul Han");
Itens k(5,"Acredite, estou mentindo","Ryan Holiday");
Itens l(6,"O mundo assombrado pelos demonios","Carl Sagan");

itens.push_back(g);
itens.push_back(h);
itens.push_back(i);
itens.push_back(j);
itens.push_back(k);
itens.push_back(l);
};

void Biblioteca::imprime(){

for(obj=usuarios.begin();obj!=usuarios.end();++obj){
    obj->Imprime();
    cout<<endl;}

cout<<endl;

for(it=itens.begin();it!=itens.end();++it){
    it->Imprime();
    cout<<endl;
}
}

void Biblioteca::emprestar(string a, int b, string c, int d){

Emprestimos e(a, b, c, d);

}
