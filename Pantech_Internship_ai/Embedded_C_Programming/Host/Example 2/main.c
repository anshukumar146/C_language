/*
 * main.c
 *
 *  Created on: 05-Feb-2026
 *      Author: anshu
 */


#include<stdio.h>

void file_Myfunc();
int privatedata;

int main()
{
     privatedata =50;
     printf("privatedata is %d\n", privatedata);

     file_Myfunc();
     printf("privatedata is %d\n", privatedata);

}
