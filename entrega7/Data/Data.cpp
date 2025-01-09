#include <iostream>
#include "Data.h"


Data::Data(int dd, int mm, int aa){

d=dd;
m=mm;
a=aa;

}

ostream & operator<<(ostream &output, const Data &x){


if(x.m==1){
output<<x.d<<" "<<"janeiro"<<" "<<x.a;}
else

if(x.m==2){
output<<x.d<<" "<<"fevereiro"<<" "<<x.a;}
else

if(x.m==3){
output<<x.d<<" "<<"março"<<" "<<x.a;}
else

if(x.m==4){
output<<x.d<<" "<<"abril"<<" "<<x.a;}
else

if(x.m==5){
output<<x.d<<" "<<"maio"<<" "<<x.a;}
else

if(x.m==6){
output<<x.d<<" "<<"junho"<<" "<<x.a;}
else

if(x.m==7){
output<<x.d<<" "<<"julho"<<" "<<x.a;}
else

if(x.m==8){
output<<x.d<<" "<<"agosto"<<" "<<x.a;}
else

if(x.m==9){
output<<x.d<<" "<<"setembro"<<" "<<x.a;}
else

if(x.m==10){
output<<x.d<<" "<<"outubro"<<" "<<x.a;}
else

if(x.m==11){
output<<x.d<<" "<<"novembro"<<" "<<x.a;}
else

if(x.m==12){
output<<x.d<<" "<<"dezembro"<<" "<<x.a;}

else{
 output<<"erro";
}


}

