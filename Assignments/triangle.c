#include<stdio.h>
//Write a program to check whether a triangle is valid or not, when the three angles of the are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

void main() {
    int angle1;
    int angle2;
    int angle3;
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    int sum;
    sum = angle1 + angle2 + angle3;

    if(sum == 180) {
        printf("The triangle is valid.\n");
    } 
    else {
        printf("The triangle is not valid.\n");
    }
}