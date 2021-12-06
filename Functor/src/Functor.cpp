//============================================================================
// Name        : Functor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Test{
	virtual bool operator()(string &test)=0;
	virtual ~Test(){};
};

struct stringtest: public Test{
	bool operator()(string &test){
		return test == "lion";
	}
};

void check(string test, Test &test1){
	if(test1(test)){
			cout<<"string is lion"<<endl;
	}
	else{
		cout<<"string is different"<<endl;
	}
}
int main() {

	stringtest test1;
	string l= "lionw";
	check(l,test1);
	return 0;
}
