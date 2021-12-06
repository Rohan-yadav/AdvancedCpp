//============================================================================
// Name        : Map.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<map>
using namespace std;

int main() {
	map<string, int> age;
	age["jay"]=24;
	age["parth"]=23;
	age["tony"]=40;
	age["Ajay"]=20;

	cout<<"Trying to find vicky's age"<<endl;
	if(age.find("vicky")!=age.end()){  //if key is found it will point to end of map.
		cout<<"Age of vicky:"<<age["vicky"]<<endl;
		}
	else{
		cout<<"key not found"<<endl;
	}
	for(map<string, int>::iterator it=age.begin(); it != age.end(); it++){
		cout<<it->first<<" - "<<it->second<<endl;
	}

	return 0;
}
