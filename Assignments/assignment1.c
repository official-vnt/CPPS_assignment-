//Write a program to convert fahrenheit to celsius
#include <stdio.h>


void main() {
    float fahrenheit;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);

    float celsius;
    celsius = (fahrenheit - 32)*(5/9);

//(32°F − 32) × 5/9 

    printf("The temperature in Celsius : %f" , celsius);

}