//============================================================================
// Name        : countFile.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<map>
#include <bits/stdc++.h>
using namespace std;
//map<string, int> f;
int c;
string word;
int l=0;
void countfrequency(string s){

	stringstream ss(s);
	ss>>word;
	if (typeid(word) == typeid(int())){
		 l= stoi(word);
		 cout<<"Last line:"<<l;
		 return;
	}
	ss>>c;
	cout<<"colour: "<<word<<"bulb: "<<c<<endl;

}

int main() {
	ifstream readfile;
	int lastline;
	string filename = "file.txt";

	readfile.open(filename);

	if(readfile.is_open()){

		string line;

		while(!readfile.eof()){
			getline(readfile,line);
			//cout<<line<<endl;
			countfrequency(line);
		}
		lastline=stoi(line);

		readfile.close();
	}
	else{
		cout<<filename<<"could not open"<<endl;
	}
	/*map<string, int>::iterator m;
		    for (m = f.begin(); m != f.end(); m++)
		        cout << m->first << " -> "
		             << m->second << "\n";*/
	cout<<lastline;
	return 0;
}
