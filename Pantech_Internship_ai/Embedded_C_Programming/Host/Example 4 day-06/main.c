/*
 * main.c
 *
 *  Created on: 06-Feb-2026
 *      Author: anshu
 */


#include <stdio.h>
#include "math.h"	//user defined function.

int main(){

	int a = 50, b = 60;
	printf("The sum is %d \n", math_add( a,  b));

	printf("The difference is %d \n",math_sub( a,  b));

	printf("The product is %d \n", math_mul( a,  b));

	printf("The division is %f \n", math_div( a,  b));



	return 0;
}
