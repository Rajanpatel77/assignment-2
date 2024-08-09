#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, next;

    printf("\nFibonacci series %d :", n);

    for(int i = 1; i <= 10; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

void main() {
    int terms;

    printf("Enter the number for Fibonacci series: ");
    scanf("%d", &terms);

   
   
   
        printFibonacci(terms);
    

}
