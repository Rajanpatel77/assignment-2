#include <stdio.h>

struct Employee {
    int empno, age;
    char empname[50],address[100];

};

void main() {
    struct Employee employees[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details  Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf(" %s", employees[i].empname);
        printf("Address: ");
        scanf(" %s", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("\n");
    }

    printf("Employee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:", i + 1);
        printf("\nEmployee Number: %d", employees[i].empno);
        printf("\nEmployee Name: %s", employees[i].empname);
        printf("\nAddress: %s", employees[i].address);
        printf("\nAge: %d", employees[i].age);
        printf("\n");
    }
}
