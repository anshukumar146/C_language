/*
 * main.c
 *
 *  Created on: 12-Feb-2026
 *      Author: anshu
 */

#include <stdio.h>

struct fruit {
    int size;
    float weight;
    char vitamin;
};

int main() {
    struct fruit apple;
    apple.size = 10;
    apple.weight = 53.55;
    apple.vitamin = 'a';

    struct fruit orange;
    orange.size = 2;
    orange.vitamin = 'c';
    orange.weight = 24.32;

    printf("the size of apple is : %d \n", apple.size);
    printf("the weight of orange is : %.2f \n", orange.weight);

    return 0;
}
