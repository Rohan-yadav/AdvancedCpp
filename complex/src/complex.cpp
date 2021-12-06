/*
//============================================================================
// Name        : complex.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
*/

#include"complex.h"
namespace imaginary {

complex::complex():real(0), img(0) {
}
complex::complex(double real, double img): real(real), img(img){}
complex::complex(const complex &other){
	//cout<<"Copy Constructer";
	real=other.real;
	img=other.img;
}
const complex &complex::operator=(const complex &other){
	real=other.real;
	img=other.img;
	return *this;
}
bool complex::operator==(const complex &other){
	return (real==other.real) && (img==other.img);
}

complex complex::operator*() const{
	return complex(real,-img);
}

 ostream &operator<<(ostream &cout,const complex &c){
	cout<<c.getreal()<<" + "<<c.getimg()<<"i";
	return cout;
}

 complex operator+(const complex &c1,const complex &c2){
	 return complex(c1.getreal()+c2.getreal(), c1.getimg()+c2.getimg());
 }

 complex operator+(const complex &c1,double d){
 	 return complex(c1.getreal()+d, c1.getimg());
  }
} /* namespace imaginary */


