#include <stdio.h>

void addNum(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

void main() {
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("\nEnter the second number: ");
    scanf("%d", &num2);

    addNum(&num1, &num2, &result);

    printf("\nSum: %d", result);
}
