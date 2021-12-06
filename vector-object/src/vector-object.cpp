//============================================================================
// Name        : vector-object.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

class Test{
	string name;
	int id;
public:
	Test(string name, int id):name(name), id(id){}
	void print(){
		cout<<"id: "<<id<<" Name: "<<name<<endl;
	}
	bool operator<(const Test &othr){
			return name < othr.name;
		}
};



int main() {

	vector<Test> test;
	test.push_back(Test("Jay",22));
	test.push_back(Test("Parth",89));
	test.push_back(Test("DS",52));

	std::sort(test.begin(),test.end());

	for(int i=0;i<(int)test.size();i++){
		test[i].print();
	}




	return 0;
}
