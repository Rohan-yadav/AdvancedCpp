//============================================================================
// Name        : List.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<list>
using namespace std;

int main() {
	list<int> number;

	number.push_back(1);
	number.push_back(2);
	number.push_back(3);

	list<int>::iterator it=number.begin();

	while(it != number.end()){
		if(*it==1){
			it++;
			number.insert(it,100);
		}

	it++;
	}

	list<int>::iterator e=number.begin();

	while(e != number.end()){
			if(*e==2){
				e=number.erase(e);
			}
			else{
				e++;
			}
		}

	for(list<int>::iterator it=number.begin();it!=number.end();it++){
		cout<<*it<<endl;
	}

	return 0;
}
