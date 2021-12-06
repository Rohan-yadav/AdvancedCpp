//============================================================================
// Name        : readFile.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
using namespace std;

int main() {
	ifstream readfile;

	string filename = "file.txt";

	readfile.open(filename);

	if(readfile.is_open()){

		string line;
		while(!readfile.eof()){
			getline(readfile,line);
			cout<<line<<endl;
		}
		readfile.close();
	}
	else{
		cout<<filename<<"could not open"<<endl;
	}
	return 0;
}
