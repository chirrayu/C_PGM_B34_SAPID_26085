//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
153 is an Armstrong number.

Input 2:
123
Output 2:
123 is not an Armstrong number.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, sum = 0, digits = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}