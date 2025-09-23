//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
12
Output 1:
Factors: 1 2 3 4 6 12

Input 2:
7
Output 2:
Factors: 1 7
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors: ");
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}