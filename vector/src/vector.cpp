//============================================================================
// Name        : vector.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<string> name;
	name.push_back("Jay");
	name.push_back("Parth");
	name.push_back("Tony");

	for(vector<string>::iterator it = name.begin(); it != name.end(); it++){
		cout<<*it<<endl;
	}

	cout<<name.size();

	return 0;
}
