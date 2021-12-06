//============================================================================
// Name        : operatorOverloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<list>
using namespace std;

struct student{
	char name[30];
	int rollno;
};

struct MyCollection{
	list<student> mystudent;
	void operator+=(student& s1){
		mystudent.push_back(s1);
	}
};

ostream& operator<<(ostream &cout,student &S1){
	cout<<"Name: "<<S1.name<<endl<<"Roll no: "<<S1.rollno<<endl;
	return cout;
}


/*ostream& operator<<(ostream &cout,MyCollection& m){
	for(student s:m.mystudent)
		cout<<s<<endl;
	return cout;
}*/

ostream& operator<<(ostream &cout,MyCollection& m){
	for(list<student>::iterator it=m.mystudent.begin();it!=m.mystudent.end();it++){
		cout<<*it<<endl;
	}
	return cout;
}


int main() {

	student s1 ={"Jay",34};
	student s2 ={"Parth",35};
	MyCollection mycollection;
	mycollection += s1;
	mycollection += s2;


	//cout<<s1<<s2;
	cout<<mycollection;
	return 0;
}
