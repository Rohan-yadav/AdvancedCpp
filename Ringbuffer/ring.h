/*
 * ring.h
 *
 *  Created on: Dec 10, 2021
 *      Author: rohan
 */

#ifndef RING_H_
#define RING_H_

#include<iostream>

template<class T>
class ring{
	T *m_value;
	int size;
	int pos;
public:
	class textring;

public:
	ring(int size):m_value(NULL),size(size),pos(0){
		m_value = new T[size];
	}

	int sizeOf(){
		return size;
	}

	void add(T value){
		m_value[pos]=value;
		pos++;
		if(pos==size){
			pos=0;
		}
	}

	T &getvalue(int n){
		return m_value[n];
	}

	~ring(){
		delete [] m_value;
	}
};

template<class T>
class ring<T>::textring{
	int size;
public:
	textring();
};

#endif /* RING_H_ */
