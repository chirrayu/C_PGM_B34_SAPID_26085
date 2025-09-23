//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
HCF = 6

Input 2:
17 13
Output 2:
HCF = 1
*/

#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    while(b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    printf("HCF = %d", a);
    return 0;
}