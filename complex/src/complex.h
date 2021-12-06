/*
 * complex.h
 *
 *  Created on: Nov. 21, 2021
 *      Author: rohan
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include<iostream>
using namespace std;

namespace imaginary {

class complex {
	double real;
	double img;
public:
	complex();
	complex(double real, double img);
	complex(const complex &other);
	const complex &operator=(const complex &other);
	bool operator==(const complex &other);
	complex operator*() const;


	double getreal() const{
		return real;
	}

	double getimg() const{
		return img;
	}
};
ostream &operator<<(ostream &cout,const complex &c);
complex operator+(const complex &c1,const complex &c2);
complex operator+(const complex &c1,double d);

} /* namespace imaginary */

#endif /* COMPLEX_H_ */
