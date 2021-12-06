//============================================================================
// Name        : stack-test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
#include<queue>
using namespace std;

class Test{
	string name;
public:
	Test(string name):name(name){	}

	void print(){
		cout<<name<<flush;
	}

};

int main() {

	stack<Test> stackTest;

	cout<<"--------STACK----------"<<endl;

	stackTest.push(Test("Mike"));
	stackTest.push(Test("Jay"));
	stackTest.push(Test("Parth"));

	/*stackTest.pop();
	Test test1=stackTest.top();
	test1.print();*/

	while(!stackTest.empty()){
		Test &test1=stackTest.top();
		test1.print();
		stackTest.pop();
		cout<<endl;
	}

	cout<<endl<<"--------QUEUE---------"<<endl;
	queue<Test> queueTest;

	queueTest.push(Test("Sizuka"));
	queueTest.push(Test("Nobeta"));
	queueTest.push(Test("Suniyo"));

	while(!queueTest.empty()){
		queueTest.front().print();
		cout<<endl;
		queueTest.pop();
	}
	return 0;
}
