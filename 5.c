#include <stdio.h>

void main() {
    int num, i;
    int NumPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        NumPrime = 0;

    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                NumPrime = 0;
                break;
            }
        }
    }

    if (NumPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}
