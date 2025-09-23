//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
28
Output 1:
28 is a perfect number.   // 1+2+4+7+14 = 28

Input 2:
12
Output 2:
12 is not a perfect number.
*/

#include<stdio.h>
int main()
{
    int n, s = 0;
    scanf("%d", &n);
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            s += i;
        }
    }
    if(s == n)
    {
        printf("%d is a perfect number.", n);
    }
    else
    {
        printf("%d is not a perfect number.", n);
    }
    return 0;
}