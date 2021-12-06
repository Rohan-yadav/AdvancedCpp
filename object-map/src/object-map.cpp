//============================================================================
// Name        : object-map.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<map>
using namespace std;

class Person{
	string name;
	int age;
public:
	Person(): name(""), age(0){}; //map needs default parameter to create objects

	Person(string name, int age):name(name),age(age){
	}
	/*Person(const Person &pr){
		cout<<"Copy constructor is called"<<endl;
		name = pr.name;
		age = pr.age;
	}*/
	void print(){
		cout<<name<<": "<<age<<endl;
	}
};

int main() {
	map<int, Person> people;

	people[0]=Person ("jay", 30);
	people[1]=Person ("Parth", 36);
	people[2]=Person ("Krishna", 23);

	people.insert(make_pair(4,Person("Neel",40)));

	for(map<int, Person>::iterator it=people.begin();it!=people.end();it++){
		cout<<it->first<<" ";
				it->second.print();
	}
	return 0;
}
