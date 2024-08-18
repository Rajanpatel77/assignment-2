#include <stdio.h>

void con(char *a, char *b) {
    while (*a != '\0') {
        a++;
    }
    while (*b != '\0') {
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
}

void main() {
    char s1[100], s2[100];

    printf("Enter first string :");
    gets(s1);

    printf("Enter second string : ");
    gets(s2);

    con(s1, s2);

    printf("\nConcatenated string is : %s", s1);
}
