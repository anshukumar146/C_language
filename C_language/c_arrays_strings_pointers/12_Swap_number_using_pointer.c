#include<stdio.h>
void swap( int *m,int *n);
int main(){
int a, b, *p, *q ;
printf("Enter the first number: \n");
scanf("%d",&a);
printf("Enter the second number: \n");
scanf("%d",&b);
p = &a;
q = &b;
swap( p, q);
printf("First number = %d \t second number = %d",a , b);
return 0;
}
void swap( int *m,int *n){
int temp = *m;
    *m = *n;
    *n=temp;
}