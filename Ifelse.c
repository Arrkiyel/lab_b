// LIBANG, LIEAN ARKIELLE D. DIT1-2

#include <stdio.h>

int main() {

    // If-else - even or odd

    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }

    return 0;
}