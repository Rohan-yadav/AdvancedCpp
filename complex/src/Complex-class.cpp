/*
 * Complex-class.cpp
 *
 *  Created on: Nov. 21, 2021
 *      Author: rohan
 */
#include <iostream>
#include "complex.h"
using namespace std;
using namespace imaginary;

int main() {
	complex c1(2,3);
	complex c2(c1);
	complex c3;
	c3=c2+c1;
	cout<<c3+3<<endl;;
	cout<<*c1<<endl;
	if(c1==c2){
		cout<<"Equal";
	}
	else{
		cout<<"Not equal";
	}
	return 0;
}




