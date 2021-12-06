/*
 ============================================================================
 Name        : Linklist.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};

struct node* head ;
void insert(int x){
	struct node* temp= (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = head;
	head = temp;
}
void print(){
	struct node* temp;
	temp = head;
	while(temp != NULL){
		printf("%d",temp->data);
		temp = temp->next;
	}
}

int main() {
	head = NULL;
	int x, n,i;
	printf("Enter maximum number of list");
	scanf("%d",&n);
	for (i=0; i<n; i++){
		printf("enter element of list");
		scanf("%d",&x);
		insert(x);
		print();
	}
	return 0;
}
