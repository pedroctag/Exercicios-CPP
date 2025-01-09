#include <iostream>
using namespace std;

bool primo (int n){
    int i,div=0;
    for(i=1;i<=n;i++){
        if (n%i==0)
        div++;
    }
    if(div==2)
        return true;

    else
        return false;

}

int main()

{
    int op;
    cout<<"digite 1 para calcular fatorial ou digite 2 para encontrar os 20 primeiro numeros primos ";
    cin>>op;
    switch(op){

        case 1:
            {
                int i,x,fat=1;
                    cout << "insira um numero ";
                    cin >> x;
                for(i=1;i<=x;i++){
                    fat=fat*(i+1);}
                cout << "o resultadoeh: "<< fat << endl;
            }

            break;

        case 2:
            {

                int i=0,teste=0;
                    while(i<20){
                            teste=teste+1;
                        if(primo(teste)){
                        cout << teste << endl;
                        i++;}
            }}
            break;
        default:
            cout<<"op invalida";}
            return 0;}
