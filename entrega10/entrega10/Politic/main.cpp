#include <iostream>
#include "prefeito.h"
#include "governador.h"
#include "presidente.h"
#include "politico.h"
using namespace std;

int main()
{
    int s,j,i;

     Politico* v[5];

for(i=0; i<5; i++)
    {
    cout << "escolha seu tipo de politico: \n1-Presidente\n2-Governador\n3-Prefeito"<<endl<<endl;
    cin >> s;

////////////////////////////////////////////////////////////////////

    if(s==1){


    v[i]=new Presidente("caligula","verspasiano","IT", 12);

}

////////////////////////////////////////////////////////////////////

    if(s==2){


    v[i]=new Governador("augusto","filho neto jr.","SG",65);}


////////////////////////////////////////////////////////////////////


    if(s==3){


    v[i]=new Prefeito("julio","Nero","RO",91);}
    }


for( j=0; j<5;j++){


 v[j]->Imprime();
 cout<<endl<<endl;


}

return 0;
}









