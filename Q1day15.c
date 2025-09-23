//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Factorial = 120

Input 2:
0
Output 2:
Factorial = 1
*/

#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers.");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial = %d", factorial);
    return 0;
}