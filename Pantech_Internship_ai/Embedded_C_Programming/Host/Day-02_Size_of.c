#include <stdio.h>

int main() {
    
    unsigned char student_age = 20;
    short int exam_score = 32000;
    float cgpa = 8.45; 

    printf("--- Day 3 Data Type Practice ---\n");

    //  Using sizeof to check memory usage
    printf("Size of unsigned char: %zu byte\n", sizeof(unsigned char));
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of float: %zu bytes\n", sizeof(float));

    //  Printing the values
    printf("Anshu's CGPA: %.2f\n", cgpa);

    return 0;
}