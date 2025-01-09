#include <iostream>
#include "complex.h"
#include <iomanip>
using namespace std;
using std::ostream;
using std::istream;


complex::complex(double a,double b)
:real(a),
imag(b){}

complex:: complex()
            :real(0),
            imag (0){}
        

double complex::Getreal(){
  return real;
}

double complex::Getimag(){
  return imag;
}


void complex::Sum(const complex &z){
real = real + z.real;
imag = imag + z.imag; 
}

void complex::Sub(const complex &z){
 real = real - z.real;
 imag = imag - z.imag; 
}

void complex::Mult(const complex &z){
int realnew = real;
real = real*z.real + (-imag*z.imag);
imag = imag*z.real + z.imag*realnew;
}


void complex::Print() const{
 cout << real;
  if(imag > 0){
     cout<<"+";
    }
   else{
     cout <<"";
   }
cout<< imag <<"i" << endl;
}

ostream &operator<<(ostream &output, const complex &x){
 output << x.real; 
  if(x.imag>= 0){
  output << " + ";
  }
else{
   output << " ";
  }

 output << x.imag <<"i" << endl;
  return output;
}


istream & operator >>(istream &input, complex &x){
  input>>x.real >>x.imag;
    return input;
  
}

complex & complex::operator+(complex &z){
real = real + z.real;
imag = imag + z.imag;
  return *this;
}

complex & complex::operator-(complex &z){
real = real - z.real;
 imag = imag - z.imag; 
return *this;
}

complex & complex::operator*(complex &z){
int realn = real;
real = real*z.real + (-imag*z.imag);
imag = imag*z.real + z.imag*realn;
return *this;
}

bool complex::operator==(const complex &x)const{
if(this->real==x.real && this->imag == x.imag){
  return true;
   }else{
    return false;
   }
 }

bool complex::operator!=(const complex &x)const{
if(this->real==x.real && this->imag == x.imag){
  return false;
   }else{
    return true;
   }
}

bool complex::operator>=(const complex &x)const{
if(this->real>=x.real && this->imag >= x.imag){
  return true;
   }else{
    return false;
   }}

bool complex::operator <=(const complex &x)const{
if(this->real<=x.real && this->imag <= x.imag){
  return true;
   }else{
    return false;
   }
}

bool complex::operator >(const complex &x)const{
if(this->real>x.real && this->imag > x.imag){
  return true;
   }else{
    return false;
   }
  }

bool complex::operator <(const complex &x)const{
if(this->real<x.real && this->imag < x.imag){
  return true;
   }else{
    return false;
   }
}