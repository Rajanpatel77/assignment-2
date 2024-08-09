#include <stdio.h>

void main() {
    int rows = 3, cols = 3;
    int matrix[3][3];
    int max;

    printf("\nEnter the elements of the matrix:");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("\nThe maximum number in the matrix is: %d", max);

    
}
