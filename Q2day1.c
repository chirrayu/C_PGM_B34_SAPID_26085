//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
//Division by zero should be handled carefully.

/*
Sample Test Cases:
Input 1:
10 5
Output 1:
Sum = 15
Difference = 5
Product = 50
Quotient = 2.00

Input 2:
8 0
Output 2:
Sum = 8
Difference = 8
Product = 0
Cannot divide by zero!
*/

#include <stdio.h>
int main() {
    float a, b;
    printf("enter first no.");
    scanf("%f",&a);
    printf("enter second no.");
    scanf("%f",&b);
    printf("Sum = %.0f\n", a+b);
    printf("Difference = %.0f\n", a-b);
    printf("Product = %.0f\n", a*b);
    printf("Quotient = %.2f", a/b);
    return 0;
}