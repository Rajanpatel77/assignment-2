#include <stdio.h>

void stringc(char *a, char *b) {
    while (*a != '\0') {
        *b = *a;
        a++;
        b++;
    }
    *b = '\0';
}

void main() {
    char c[100], d[100];

    printf("Enter string: ");
    gets(c);

    stringc(c, d);

    printf("\ncopy string is: %s", d);
}
