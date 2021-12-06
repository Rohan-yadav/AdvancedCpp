//============================================================================
// Name        : binary.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

#pragma pack(push,1)
struct person{
	char name[50];
	int age;
	int height;
};
#pragma pack(pop)

using namespace std;

int main() {
	person someone={"Jay",23,50};

	string filename="binary.bin";
	ofstream outfile;
	outfile.open(filename, ios::binary);
	if(outfile.is_open()){

		outfile.write(reinterpret_cast<char *>(&someone),sizeof(person));
		outfile.close();
	}
	else{
		cout<<"Could not create a file";
	}
	//------------------Read from file-----------

	person someoneelse={};

	ifstream infile;
		infile.open(filename, ios::binary);
		if(infile.is_open()){

			infile.read(reinterpret_cast<char *>(&someoneelse),sizeof(person));
					infile.close();
		}
		else{
			cout<<"Could not create a file";

		}
		cout<<someoneelse.name<<" "<<someoneelse.age<<" "<<someoneelse.height;
	return 0;
}
