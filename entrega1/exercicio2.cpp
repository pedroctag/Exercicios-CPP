# include <iostream>
using namespace std;

int soma(int n){
    if(n==0)
        return n;

    else
        return n+soma(n-1);
    }

int main(){
int n;

cout<<"escolha um numero qualquer ";
cin>>n;

cout<<"a soma eh: "<<soma(n);

return 0;
}
