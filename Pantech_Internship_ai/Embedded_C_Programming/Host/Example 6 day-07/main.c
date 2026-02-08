/*
 * main.c
 *
 *  Created on: 08-Feb-2026
 *      Author: anshu
 */


#include<stdio.h>
int main(){

	float number1 = 45.123456789;
	double number2 = 45.123456789;
	printf("number using float is: %0.9f \n",number1);
	printf("number using double is: %0.9lf \n",number2);		//double is more precise then float.
	printf("number is: %0.9e \n",number2);		//%e means to print in scientific notation.
	return 0;
}
