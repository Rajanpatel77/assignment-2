#include <stdio.h>

void main() {
    int num, revNum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;            
        revNum = revNum * 10 + rem;
        num /= 10;                  
    }

    printf("\nReversed Number: %d\n", revNum);
}
