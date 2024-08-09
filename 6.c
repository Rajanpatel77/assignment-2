#include <stdio.h>

 void main() {
    int marks[5], total = 0;
    float percentage;
    
    printf("Enter 5 subjects Marks: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    
    percentage = (float)total / 5;

    if (percentage > 75) {
        printf("\nDistinction");
    } else if (percentage > 60) {
        printf("\nFirst class");
    } else if (percentage > 50) {
        printf("\nSecond class");
    } else if (percentage > 35) {
        printf("\nPass class");
    } else {
        printf("Fail");
    }


}
