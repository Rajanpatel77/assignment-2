#include<stdio.h>

void main() {


int principal, rate, time, simpleintrest;

printf("Enter pricipal amount :");
scanf("%d",&principal);

printf("\nEnter annual rate :");
scanf("%d",&rate);

printf("/nEnter Year :");
scanf("%d",&time);

simpleintrest=(principal * rate * time)/100;

printf("\nsimple entrest is :%d",simpleintrest);

}

