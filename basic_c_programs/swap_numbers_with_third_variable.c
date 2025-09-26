//Swap two number with a third variable.

#include<stdio.h>
int main()
{
    int a , b , tempo;
printf("Entre a:\n");
scanf(" %d",&a);
printf("Enter b:\n");
scanf(" %d",&b);

tempo = a ;                 // temporary file named tempo will store the value of a.
a = b ;                     // a will store the value of b. A is swapped.
b = tempo ;                 // b will sore the value of tempo, which is a at first,so b also swapped.

printf("After swapping:\na :%d \t b :%d",a,b);

}