//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
17
Output 1:
17 is prime.

Input 2:
15
Output 2:
15 is not prime.
*/

#include<stdio.h>
int main()
{
    int n, f = 1;
    scanf("%d", &n);
    if(n < 2)
    {
        f = 0;
    }
    else
    {
        for(int i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                f = 0;
                break;
            }
        }
    }
    if(f)
    {
        printf("%d is prime.", n);
    }
    else
    {
        printf("%d is not prime.", n);
    }
    return 0;
}