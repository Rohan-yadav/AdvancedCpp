//============================================================================
// Name        : standard-exception.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Myexception: public exception{
public:
	virtual const char* what() const throw(){
		return "somthing went wrong";
	}
};

class test{
public:
	void wrong(){
		throw Myexception();
	}
};

int main() {
	test test1;
	try{
		test1.wrong();
	}
	catch(Myexception &e){
		cout<<e.what()<<endl;
	}
	return 0;
}
