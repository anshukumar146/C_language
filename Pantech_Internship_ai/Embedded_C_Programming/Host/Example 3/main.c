/*
 * main.c
 *
 *  Created on: 05-Feb-2026
 *      Author: anshu
 */


#include<stdio.h>
void change_system_clock(int sys_clk);
void file_myfunc();

int main(){
	file_myfunc();
	change_system_clock(2);
	return 0;
}
void change_system_clock(int sys_clk)
{printf("system clock changed to %d \n ",sys_clk);}
