#include <stdio.h>

int rnum(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return rnum(num / 10, rev * 10 + num % 10);
}

void main() {
    int num, reversed;

    printf("Enter a number: ");
    scanf("%d", &num);

    reversed = rnum(num, 0);

    if (num == reversed) {
        printf("\n%d is a palindrome", num);
    } else {
        printf("\n%d is not a palindrome", num);
    }
}
