//============================================================================
// Name        : wordcount.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include<map>
//#include<string>
#include <bits/stdc++.h>
using namespace std;

void countfrequency(string s){
	map<string, int> f;
	stringstream ss(s);
	string word;
	while(ss>>word){
		f[word]++;
	}

	map<string, int>::iterator m;
	    for (m = f.begin(); m != f.end(); m++)
	        cout << m->first << " -> "
	             << m->second << "\n";
}

int main() {

	string s;
	s = "[Blue] [23] [Red] [20] [Blue] [30] [White] [23] [Black] [20]";
	countfrequency(s);
	return 0;
}
