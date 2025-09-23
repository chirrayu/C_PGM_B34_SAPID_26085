//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
Sum of digits = 10

Input 2:
567
Output 2:
Sum of digits = 18
*/

#include<stdio.h>
int main()
{
    int n, s = 0;
    scanf("%d", &n);
    while(n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    printf("Sum of digits = %d", s);
    return 0;
}