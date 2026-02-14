/*
 * main.c
 *
 *  Created on: 14-Feb-2026
 *      Author: anshu
 */


 #include<stdio.h>
#include<stdint.h>

int main()
{

	 uint8_t const data =10;

	 uint8_t *ptrData;

	printf("%d \n",data);
	 ptrData=(uint8_t*)&data;

	 *ptrData =50;
	//data=50;

	printf("%d \n",data);

	return 0;
}

