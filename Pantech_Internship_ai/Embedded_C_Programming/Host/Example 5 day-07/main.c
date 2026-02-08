/*
 * main.c
 *
 *  Created on: 08-Feb-2026
 *      Author: anshu
 */

#include<stdio.h>
int main(){

	int a,b,c,d;
	printf("Enter the value: ");
	fflush(stdout);				//flush the buffer created by printf.
	scanf("%d",&a);
	printf("Enter the value: ");
	fflush(stdout);
	scanf("%d",&b);
	printf("Enter the value: ");
	fflush(stdout);
	scanf("%d",&c);
	d=(a+b+c)/3;
	printf("The average is:%d",d);
	getchar();
	getchar();

	return 0;
}
