#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  
    } else {
        return n * factorial(n - 1);
    }
}

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    
        printf("\nFactorial of %d is %d", num, factorial(num));
    

}

