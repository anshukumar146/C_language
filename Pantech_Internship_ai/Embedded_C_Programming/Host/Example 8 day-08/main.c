/*
 * main.c
 *
 *  Created on: 09-Feb-2026
 *      Author: anshu
 */


#include<stdio.h>
long long int data =0xfffeabcd11112345;

int main(){

	char *address;
	address=(char*) &data;			 //explicit casting
	printf("data stored in address %p is %x \n",address,*address);

	int *address1;
	address1=(int*) &data;			//explicit casting
	printf("data stored in address1 %p is %x \n",address1,*address1);
	short *address2;
	address2=(short*) &data;	   //explicit casting
	printf("data stored in address2 %p is %x \n",address2, *address2);
	long long data2 = 10;
	long long *address3;

	address3 = &data2;

	printf("data stored in address3 %p is %lld\n", (void *)address3, *address3);




	//POINTER ARITHEMETICS.
		char *paddress;
		printf("The address of data is:%p \n",&data);
		paddress=(char*) &data;
		paddress=paddress+1;
		printf("data stored in address3 %p is %x \n",paddress,*paddress);
		paddress=paddress+1;
		printf("data stored in address3 %p is %x \n",paddress,*paddress);

	return 0;}
