//============================================================================
// Name        : writeFile.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//ofstream outfile;
	fstream outfile;
	string filename = "file.txt";
	outfile.open(filename,ios::out);
	if(outfile.is_open()){
		outfile<<"Hii everyone"<<123<<endl<<"this is second line"<<endl;
		outfile.close();
	}
	else{
		cout<<filename<<"couldnot open"<<endl;
	}
	return 0;
}
