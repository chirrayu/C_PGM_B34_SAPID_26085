//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
Binary = 1010

Input 2:
7
Output 2:
Binary = 111
*/

#include <stdio.h>

int main()
{
    int num, binary = 0, rem, place = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;
    if (num == 0) {
        printf("Binary = 0");
        return 0;
    }

    while (num > 0) {
        rem = num % 2;
        binary += rem * place;
        place *= 10;
        num /= 2;
    }

    printf("Binary = %d", binary);
    return 0;
}