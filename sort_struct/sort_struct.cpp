/*
 * sort_struct.cpp
 *
 *  Created on: Aug. 16, 2020
 *      Author: rohan
 */

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct value{
	int roll;
	string name;
}data;

bool compare(data a, data b)
{
	//for descending order replace with a.roll >b.roll
	if(a.roll < b.roll)
		return 1;
	else
		return 0;
}

int main()
{
	int n,i;

	cout<<"Enter the number of students\n";
	cin>>n;

	data  array[n];//array of structure is created

	cout<<"Enter roll number and then name\n";
	for(i=0;i<n;i++)
	{
		cin>>array[i].roll;
		cin>>array[i].name;
	}

	sort(array,array+n,compare);

	cout<<"Sorted list..."<<endl;
	for(i=0;i<n;i++)
	{
		cout<<array[i].roll<<" ";
		cout<<array[i].name<<endl;
	}

	return 0;
}


