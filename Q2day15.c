//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
Reversed = 4321

Input 2:
700
Output 2:
Reversed = 7   // or 007? But we output 7 as integer
*/

#include<stdio.h>
int main()
{
    int n, r = 0;
    scanf("%d", &n);
    while(n != 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed = %d", r);
    return 0;
}