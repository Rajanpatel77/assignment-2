#include<stdio.h>

void main() {

int year;

printf("Enter Year :");
scanf("%d",&year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {

    printf("leap year");
}
else {
    printf("Not Leap year");
}


    
}