/*
 * main.c
 *
 *  Created on: 10-Feb-2026
 *      Author: anshu
 */


#include <stdio.h>

int main() {
   int a;
	printf("Select from options:\n");
	fflush(stdout);
	printf("\t 1.Check if eligible to Vote \n \t 2.Check if number is bigger/smaller/same \n \t 3.To print Tax Payable\n");
	fflush(stdout);
	printf("\tEnter choice: \n");
	fflush(stdout);
	scanf("%d",&a);

    switch (a) {

    case 1: {
        int age;
        printf("Enter the age: ");
        fflush(stdout);
        scanf("%d", &age);

        if (age < 18) {
            printf("Not eligible to Vote\n");
            fflush(stdout);
        } else {
            printf("Eligible to Vote\n");
            fflush(stdout);
        }
        break;
    }

    case 2: {
        float num1, num2;

        printf("Enter the first number: ");
        fflush(stdout);
        if (scanf("%f", &num1) != 1) {
            printf("Invalid input... exiting\n");
            fflush(stdout);
            return 0;
        }

        printf("Enter the second number: ");
        fflush(stdout);
        if (scanf("%f", &num2) != 1) {
            printf("Invalid input... exiting\n");
            fflush(stdout);
            return 0;
        }

        int inum1 = (int)num1;
        int inum2 = (int)num2;

        if ((inum1 != num1) || (inum2 != num2)) {
            printf("Warning - comparing only the integer part\n");
            fflush(stdout);
        }

        if (inum1 == inum2) {
            printf("Numbers are equal\n");
            fflush(stdout);
        } else if (inum1 < inum2) {
            printf("Num2 is Bigger\n");
            fflush(stdout);
        } else {
            printf("Num1 is Bigger\n");
            fflush(stdout);
        }
        break;
    }

    case 3: {
        int income;
        float tax = 0;

        printf("Enter the income: ");
        fflush(stdout);
        scanf("%d", &income);

        if (income <= 9525) {
            tax = 0;
        } else if (income <= 38700) {
            tax = income * 0.12;
        } else if (income <= 82500) {
            tax = income * 0.24;
        } else {
            tax = income * 0.32 + 1000;
        }

        printf("Tax Payable is %.2f\n", tax);
        fflush(stdout);
        break;
    }

    default:
        printf("Invalid option selected\n");
        fflush(stdout);
    }

    return 0;
}
