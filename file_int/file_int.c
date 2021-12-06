/*
 * file_int.c
 *
 *  Created on: Oct. 19, 2020
 *      Author: rohan
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{

	FILE *fptr;
	int num;
	fptr = fopen("number.txt","w");

	if (fptr == NULL){
		printf("file does not exist.");
		exit(1);
	}

	printf("Enter number");
	scanf("%d",&num);

	fprintf(fptr,"Your number is : %d",num);
	fclose(fptr);

	return 0;
}
