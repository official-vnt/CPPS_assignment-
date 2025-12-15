#include<stdio.h>

void main() {
    int principal;
    int rate;
    int time;

    
    printf("Enter the Principal amount: ");
    scanf("%d", &principal);
    printf("Enter the Rate of interest: ");
    scanf("%d", &rate);
    printf("Enter the Time in months: ");
    scanf("%d", &time);

    int SI;
    SI = (principal * rate * time) / 100;
    printf("Simple Interest = %d", SI);
}