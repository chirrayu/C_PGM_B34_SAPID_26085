//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Sum = 16   // 1+3+5+7

Input 2:
5
Output 2:
Sum = 25   // 1+3+5+7+9
*/

#include <stdio.h>

int main()
{
    int n, sum = 0, odd = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }

    printf("Sum = %d", sum);
    return 0;
}