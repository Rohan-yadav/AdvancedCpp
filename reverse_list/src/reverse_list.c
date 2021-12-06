/*
 ============================================================================
 Name        : reverse_list.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head;
void insert(int x, int pos){
    int i;
    struct node* temp = (struct node *) malloc (sizeof (struct node));
    struct node* temp1 = (struct node *) malloc (sizeof (struct node));
    temp->data=x;
    temp->next=NULL;
    if(pos==1){
        temp->next=head;
        head=temp;
        return;
    }
    temp1=head;
    for(i=1;i<pos-1;i++){
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;

}
void print ()
{
  struct node *temp;
  temp = head;
  while (temp != NULL)
    {
      printf ("%d", temp->data);
      temp = temp->next;
    }
    printf("\n");
}
void reverse(){
    struct node* prev = (struct node *) malloc (sizeof (struct node));
    struct node* current = (struct node *) malloc (sizeof (struct node));
    struct node* next = (struct node *) malloc (sizeof (struct node));
    prev=NULL;
    current = head;
    while(current != NULL){

        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}

void recursive_p(struct node *p){
    if(p==NULL) return;
   recursive_p(p->next);
   printf("%d ",p->data);

}


int main()
{
    head = NULL;
    insert(4,1);
    insert(3,2);
    insert(5,3);
    insert(6,4);
    print();
    recursive_p(head);
    return 0;
}

