// LIBANG, LIEAN ARKIELLE D. DIT1-2

#include <stdio.h>

int main() {

    int x = 100, y = 25;

    //Addition
    printf("x + y = %d\n", x + y);

    //Subtraction
    printf("x - y = %d\n", x - y);
    
    //Multiplication
    printf("x * y = %d\n", x * y);

    //Division
    printf("x / y = %d\n", x / y);

    // Assignment operators
    x += y;
    printf("x += y is the same as x = %d\n", x);

    x -= y;
    printf("x -= y is the same as x = %d\n", x);

    x *= y;
    printf("x *= y is the same as x = %d\n", x);

     x /= y;
    printf("x /= y is the same as x = %d\n", x);

     x %= y;
    printf("x %= y is the same as x = %d\n", x);
    
    // AND operator
    if (x > y && x + y <= 125) {
        printf("Both conditions are true\n");
    } 
    else { 
        printf ("At least one or both conditions are fale\n");
    }

    // OR operator
    if (x - y >= 100 || x < y) {
        printf("At least one condition is true\n");
    } 
    else { 
        printf ("Both conditions are false\n");
    }

    // NOT operator
    if (!(x <= y)) {
        printf("x is greater than y\n");
    }
    else {
        printf("x is less than or equal to y\n");
    }

    return 0;
}   