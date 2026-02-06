/*
 * math.c
 *
 *  Created on: 06-Feb-2026
 *      Author: anshu
 */


int math_add(int a, int b);
int math_sub(int a, int b);
int math_mul(int a, int b);
float math_div(int a, int b);

int math_add(int a, int b)
{
    return a + b;
}

int math_sub(int a, int b)
{
    return a - b;
}

int math_mul(int a, int b)
{
    return a * b;
}

float math_div(int a, int b)
{
    if (b == 0) {
        return 0.0f;
    }
    return (float)a / b;
}
