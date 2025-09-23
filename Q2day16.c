//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
121 is a palindrome.

Input 2:
123
Output 2:
123 is not a palindrome.
*/

#include<stdio.h>
int main()
{
    int n, t, r = 0;
    scanf("%d", &n);
    t = n;
    while(t != 0)
    {
        r = r * 10 + t % 10;
        t /= 10;
    }
    if(r == n)
    {
        printf("%d is a palindrome.", n);
    }
    else
    {
        printf("%d is not a palindrome.", n);
    }
    return 0;
}