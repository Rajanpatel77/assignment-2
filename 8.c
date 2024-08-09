#include <stdio.h>

void main() {
    int n, first = 0, second = 1, next;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci series  %d: ", n);

    for (int i = 1; i <= 10; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }

    printf("\n");
}
