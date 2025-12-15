#include <stdio.h>
#include <math.h>

void main() {
    int principal;
    int rate;
    int time;
    int n; 

    printf("Enter the Principal amount: ");
    scanf("%d", &principal);
    printf("Enter the Rate of interest: ");
    scanf("%d", &rate);
    printf("Enter the Time in years: ");
    scanf("%d", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // float amount;
    int a;
    a = 1 + (rate / n);
    int b;
    b = n * time;
    float c;
    c = pow(a, b);
    printf("%f", c);

//    float amount;
//     amount = principal * pow((1 + (rate / (n))), (n * time));
