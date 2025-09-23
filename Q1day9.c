//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -5 6
Output 1:
Two real roots: 3.00 and 2.00

Input 2:
1 2 5
Output 2:
Complex roots: -1.00 + 2.00i and -1.00 - 2.00i
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2, real, imag;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Two real roots: %.2f and %.2f", root1, root2);
    } else if (d == 0) {
        root1 = -b / (2 * a);
        printf("One real root: %.2f", root1);
    } else {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi", real, imag, real, imag);
    }

    return 0;
}