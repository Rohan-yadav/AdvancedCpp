#include <iostream>
#include"ring.h"
using namespace std;

int main() {
	ring<string> buffer(3);
	buffer.add("Rphan");
	buffer.add("DS");
	buffer.add("Jay");
	buffer.add("Parth");

	for(int i=0;i<buffer.sizeOf();i++){
		cout<<buffer.getvalue(i)<<endl;
	}
}
