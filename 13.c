#include <stdio.h>

void main() {
    int arr[10];
    int max;

    printf("\nEnter 10 elements :");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(int i = 1; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\nThe maximum number is: %d", max);

}
