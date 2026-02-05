/*
 * main.c
 *
 *  Created on: 05-Feb-2026
 *      Author: anshu
 */


#include <stdio.h>

int a = 5; // Global variable

int main() {
    // Use uintptr_t for portability when storing addresses
    unsigned long long int addressofA = (unsigned long long int)&a;

    printf("The address of a (using %p): %p\n", (void*)&a);


    printf("The address of a (stored in variable): %llu\n", addressofA);

    return 0;
}
