#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++)
         {
            if (*(arr + j) > *(arr + j + 1))
            
             {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

void main() {
    int n;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter elements:");
    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("\nSorted array:");
    for (int i = 0; i < n; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
