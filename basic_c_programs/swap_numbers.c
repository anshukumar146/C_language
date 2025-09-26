//swap two number without a third variable.
#include<stdio.h>
int main()
{
    int a , b;
printf("Entre a:\n");
scanf(" %d",&a);
printf("Enter b:\n");
scanf(" %d",&b);

a = a + b ;                 //a vnow have the sum of both variable.
b = a - b ;                 //b value will be swapped.   
a = a - b ;                 //Now,a will become the difference of changed value of (a-b),which is swapped.


printf("After swapping:\na :%d \t b :%d",a,b);

}
