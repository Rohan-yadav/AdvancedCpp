/*
 * stack.cpp
 *
 *  Created on: Dec. 29, 2020
 *      Author: rohan
 */



#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){

	stack<int> st;

	//Adding elements on stack:

	st.push(1);
	st.push(7);
	st.push(8);
	st.push(0);

	//stack elements : 1,7,8,0

	cout<<"stack top elements:"<<st.top()<<endl; //printing top element of stack i.e. last entered element

	st.pop();  //this will delete last element of stack
	cout<<"Top elements after delete:"<<st.top()<<endl;

	queue<int> qu;

	//Adding elements in queue:

	qu.push(3);
	qu.push(9);
	qu.push(6);
	qu.push(4);

	//print first element:

	cout<<"Queue front element:"<<qu.front()<<endl;

	//delete element;

	qu.pop();
	cout<<"Front elements after delete:"<<qu.front();

	return 0;

}
