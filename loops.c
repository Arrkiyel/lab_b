// LIBANG, LIEAN ARKIELLE D. DIT1-2

#include <stdio.h>

int main() {

    int i;

    // While loop
    i = 1;
    printf("While loop:\n");
    while (i <=10) {
        printf("%d\n", i);
        i++;
    }
    
    // For loop
    printf("\nFor loop:\n");
    for (i = 2; i <= 20; i+=2) {
        printf("%d\n", i);
    }

    // Do-while
    i = 1;
    printf("\nDo-while loop:\n");
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}