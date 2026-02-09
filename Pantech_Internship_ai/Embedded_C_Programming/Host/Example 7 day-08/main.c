/*
 * main.c
 *
 *  Created on: 09-Feb-2026
 *      Author: anshu
 */


#include<stdio.h>
int main(){

	char data=100;
		char *pointervariable;
		pointervariable = &data;
		char value = *pointervariable;
		//Read operation.
		printf("Address of the data is:%x \n", &data);
		printf("value of the content stored in the pointer variable is:%d \n", value);
		//write operation.
		*pointervariable = 60;
		printf("value of the content stored in the pointer variable is:%d \n", data);

	return 0;}
