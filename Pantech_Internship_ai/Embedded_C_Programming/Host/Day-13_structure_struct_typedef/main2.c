/*
 * main.c
 *
 *  Created on: 12-Feb-2026
 *      Author: anshu
 */

#include<stdio.h>
typedef struct
{
	int size;
	float weight;
	char vitamin;
}fruit_t;

int main(){

	 fruit_t apple;
	apple.size=10;
	apple.weight=53.55;
	apple.vitamin='a';

	fruit_t banana;
	banana.size=2;
	banana.vitamin='B';
	banana.weight=24.32;

	printf("the size of apple is : %d \n",apple.size);
	printf("the size of banana is : %d \n",banana.size);



}
