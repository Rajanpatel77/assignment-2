#include <stdio.h>

void main() {
    int arr[10];
    int position;

    printf("\nEnter 10 elements :");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (1-10): ");
    scanf("%d", &position);

    if(position < 1 || position > 10) {
        printf("\nInvalid position!");
    } else {
        printf("\nElement position %d is: %d", position, arr[position - 1]);
    }

}
