#include <iostream>
#include <set>

using namespace std;

int main(){

set<int> elementos;
set<int>::iterator it;
int s,v;

cout<<"======================================"<<endl<<"Implementacao de Arvore (set) no STL "<<endl<<"======================================"<<endl<<endl;

while(s!=7){

cout<<"1. Inserir elemento "<<endl<<"2. Remover elementos com determinado valor"<<endl<<"3. Exibir elementos em ordem"<<endl<<"4. Exibir quantidade de elementos"<<endl<<"5. Remover todos os elementos"<<endl<<"6. Consultar quantidade de elementos com determinado valor"<<endl<<"7. Sair"<<endl<<endl;
cout<<"Escolha uma opcao: "<<endl<<endl;

cin>>s;

switch(s){

case 1:
cout<<"Insira um elemento: "<<endl<<endl;
cin>>v;
elementos.insert(v);
break;

case 2:
cout<<"Remover todos os elementos com qual valor?: "<<endl<<endl;
cin>>v;
elementos.erase(v);
break;

case 3:
for(it=elementos.begin();it != elementos.end(); ++it)
cout<<"Elementos: "<<*it<<" ";

cout<<endl;
break;

case 4:
cout<<"A quantidade de elementos eh: "<<elementos.size()<<endl<<endl;
break;

case 5:
elementos.clear();
break;

case 6:
cout<<"Conferir quantidade de elementos de qual valor? ";
cin>>v;

break;

case 7:
return 0;
break;

default:
s=7;
return 0;
break;

        }
    }
return 0;
}
