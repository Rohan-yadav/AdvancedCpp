//============================================================================
// Name        : abstract.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{

public:
	virtual void run()=0;
	virtual void speak()=0;
};

class Dog: public Animal{
public:
	virtual void speak(){
		cout<<"Dog is barking"<<endl;
	}
};

class Pomerian: public Dog{
public:
	virtual void run(){
		cout<<"Pomerian is running"<<endl;
	}
};
int main() {

	Animal *a[2];
	Pomerian p;
	a[0]=&p;
	a[0]->run();
	return 0;
}
