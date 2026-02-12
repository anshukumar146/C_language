/*
 * main.c
 *
 *  Created on: 11-Feb-2026
 *      Author: anshu
 */


/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdint.h>

struct sensor{
    uint16_t Id;
    float temp;
    char status;
};

int main()
{
    struct sensor sensor1={1234,37.8,'I'};
    printf("Sensor id = %u \n",sensor1.Id);
    printf("Sensor temperature = %f \n",sensor1.temp);
    printf("Sensor status = %c \n",sensor1.status);

    return 0;
}
