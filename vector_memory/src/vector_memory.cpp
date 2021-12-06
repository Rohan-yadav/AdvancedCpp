//============================================================================
// Name        : vector_memory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> number;
	long long unsigned int capacity;
	capacity=number.capacity();
	cout<<"Capacity :"<<capacity;

	for(int i=0;i<=10000;i++){
		if(capacity != number.capacity()){
			capacity = number.capacity();
			cout<<"Capacity: "<<capacity<<endl;
		}
		number.push_back(i);
	}
	return 0;
}
