/*
 * main.c
 *
 *  Created on: 10-Feb-2026
 *      Author: anshu
 */


#include<stdio.h>
int main(){
	int a, b;
	printf("Enter the first number: ");
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter the second number: ");
	fflush(stdout);
	scanf("%d",&b);

	printf("The result of & operator is : %d \n", a&b);			//bit wise operator.
	printf("The result of | operator is : %d \n", a|b);
	printf("The result of ^ operator is : %d \n", a^b);
	printf("The result of ~first number operator is : %d \n", ~a);

	printf("BIT masking:\n");
	// code to set 4th and 7th bit position.
	printf("BIT masking result of first number's 4th and 7th bit position is:%d \n", (a & 144));


	return 0;}
