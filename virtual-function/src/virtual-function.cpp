//============================================================================
// Name        : virtual-function.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



class instrument{
public:
	virtual void sound(){
		cout<<"Instrument is playing"<<endl;
	}
};

class guitar:public instrument{
	void sound(){
		cout<<"Guitar is playing"<<endl;
	}
};


struct example{
	int n1;
	int n3;
};

int main() {

	instrument* i1;
	guitar g1;
	i1=&g1;
	i1->sound();
	example ex={1,2};
	cout<<ex.n1;
	return 0;
}
