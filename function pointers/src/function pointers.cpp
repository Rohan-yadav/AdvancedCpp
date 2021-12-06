//============================================================================
// Name        : function.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool test(string s){
	return s.size()==5;
}

int countstring(vector<string> &v,bool (*match)(string s)){
	int x;
	for(unsigned int i=0;i<v.size();i++){
		if(match(v[i]))
			x++;
	}
	return x;
}
int main() {

	vector<string> text;
	text.push_back("One");
	text.push_back("Two");
	text.push_back("Three");
	text.push_back("Four");
	text.push_back("Five");

	cout<<countstring(text,test);

	//cout<<count_if(text.begin(),text.end(),test);
	return 0;
}
