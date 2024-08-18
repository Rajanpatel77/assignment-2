#include <stdio.h>

void main() {
    int choice;
    float base, height, length, width, radius, area;

    while (1) {
        printf("\n1. Triangle");
        printf("\n2. Rectangle");
        printf("\n3. Circle");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter base of triangle: ");
            scanf("%f", &base);
            printf("Enter height of triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("\nArea of triangle is: %.2f", area);

        } else if (choice == 2) {
            printf("Enter length of rectangle: ");
            scanf("%f", &length);
            printf("Enter width of rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("\nArea of rectangle is: %.2f", area);

        } else if (choice == 3) {
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("\nArea of circle is: %.2f", area);

        } else if (choice == 4) {
            printf("Good Byy.\n");
            break;
            
        } else {
            printf("\nInvalid choice option.");
        }
    }
}
