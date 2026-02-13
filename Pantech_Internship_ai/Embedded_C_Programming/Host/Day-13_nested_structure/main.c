/*
 * main.c
 *
 *  Created on: 12-Feb-2026
 *      Author: anshu
 */


#include <stdio.h>

// embedded nested structure
struct Employee
{
	int id;
	struct{
		int dd;
		int yyyy;
	}var_Doj;

}var_Employee;

int main()
{
	var_Employee.id=120;
	var_Employee.var_Doj.dd=24;
	var_Employee.var_Doj.yyyy=2022;

	printf("Employee Id: %d \n",var_Employee.id);
	printf("Year Joined: %d \n",var_Employee.var_Doj.yyyy);

	return 0;
}

