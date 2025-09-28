// Program to check if a number is Armstrong upto (3-digit)

//Armstrong number are those numbers whose sum of cubes of its digit is equall to number itself.

#include <stdio.h>

int main()                                                    
{
    int num, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;                                              // store original number

    while (num != 0)
     {
        remainder = num % 10;                                    // extract last digit

        result += remainder * remainder * remainder;             // cube and add

        num /= 10;                                               // remove last digit
    }

    if (original == result)
        printf("%d is an Armstrong number.\n", original);

    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}