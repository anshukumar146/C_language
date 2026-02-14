/*
 * main.c
 *
 *  Created on: 14-Feb-2026
 *      Author: anshu
 */


#include<stdio.h>
#include<string.h>
int main(){
	int a;
	printf("Enter a choice: \n");
	fflush(stdout);
	printf("1. Length and Hello World\t 2. Input and Output name\n");
	fflush(stdout);
	scanf("%d",&a);
	switch(a){
	case 1:
	{
		char str[]="Hello World";
	int  len= sizeof(str);
	int  len2= strlen(str);

	printf("%d \n",len);
	printf("%d \n",len2);

	printf("Hello World\n");
	printf("%s\n" ,str);
	break;
	}

	case 2:
	        {
	            char str1[40];
	            printf("Type the name: ");
	            fflush(stdout);

	            fgets(str1, sizeof(str1), stdin);
	            printf("Your name is: %s", str1);
	            break;
	        }
	        default:
	            printf("Invalid choice!\n");

	}
	return 0;}

