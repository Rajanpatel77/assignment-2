#include <stdio.h>

int main() {
    int choice;
    float base, height, length, width, radius, area;

    while (1) {
        printf("1. Triangle\n");
        printf("\nCalculate Area\n");
        printf("2. Rectangle\n");
        printf("3. Circle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                printf("Enter the base of the triangle: ");
                scanf("%f", &base);
                printf("\nEnter the height of the triangle: ");
                scanf("%f", &height);
                area = 0.5 * base * height;
                printf(\n"Area of the triangle is: %.2f", area);
                break;
            case 2:
                printf("\nEnter the length of the rectangle: ");
                scanf("%f", &length);
                printf("\nEnter the width of the rectangle: ");
                scanf("%f", &width);
                area = length * width;
                printf("\nArea of the rectangle is: %.2f", area);
                break;
            case 3:
                printf("\nEnter the radius of the circle: ");
                scanf("%f", &radius);
                area = 3.14159 * radius * radius;
                printf("\nArea of the circle is: %.2f", area);
                break;
            case 4:
                printf("\nExiting the program.");
                
            default:
                printf("\nInvalid choice. Please enter a valid option.");
        }
    }

}
