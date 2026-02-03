#include <stdio.h>
#include <stdint.h>             // Essential for uint8_t, uint16_t

int main() {
    
    uint8_t day = 2;            // Using uint8_t (1 byte) 
    
    printf("Hello Embedded World!\n");
    printf("We are currently on Day %u of the Pantech Internship.\n", day);
    printf("The size of our 'day' variable is: %zu byte.\n", sizeof(day));
    
    return 0;
}