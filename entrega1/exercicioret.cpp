#include <iostream>
using namespace std;

class retangulo
{

private:

    int largura=1;
    int comprimento=1;

public:
    retangulo(int l, int c)
{
    setLargura(l);
    setComprimento(c);
}
//////////////////////////////////////////////////////
    int getLargura(){
    return largura;}
//////////////////////////////////////////////////////
    int getComprimento(){
    return comprimento;}
//////////////////////////////////////////////////////
    void setLargura(int l){

    if((l>0) && (l<20))
        largura=l;
    else
    cout<<"erro "<<endl;}
//////////////////////////////////////////////////////
    void setComprimento(int c){
    if((c>0) && (c<20))
        comprimento=c;
    else
        cout<<"erro "<<endl;
    }
//////////////////////////////////////////////////////
    int getPerimetro(int l, int c){
        int p;

        p=(c*2)+(l*2);

        return p;
    }
//////////////////////////////////////////////////////
    int getArea(int c, int l){
        int a;

        a=c*l;
        return a;
    }

//////////////////////////////////////////////////////
    void display(int c, int l){

    int i,o;

    for(o=1;o<=l;o++){
        cout << endl;
    for(i=1;i<=c;i++){
            if(o==1 || o==l)
            cout<<"x";
            else
                if(i==1 || i==c)
                cout<<"x";
            else
                cout<<".";
            }
        }
    }
};

int main(){

int l,c;

cout << "insira a largura: ";
cin >> l;

cout << "insira o compimento: ";
cin >> c;

retangulo ret(l,c);


cout << "a largura eh: " << ret.getLargura() << endl << "o comprimento eh: " << ret.getComprimento();
cout << "o perimetro eh: " << ret.getPerimetro(l,c) << endl << "a area eh: " << ret.getArea(l,c) << endl;

        if(c==l)
        cout << "o objeto eh quadrado!"<<endl;

ret.display(c,l);

return 0;
}
