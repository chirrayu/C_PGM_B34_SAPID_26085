//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
1's complement = 0101

Input 2:
1111
Output 2:
1's complement = 0000
*/

#include<stdio.h>
int main()
{
    int n, comp = 0, p = 1;
    scanf("%d", &n);
    if(n == 0)
    {
        printf("1's complement = 1");
        return 0;
    }
    while(n != 0)
    {
        int d = n % 10;
        comp += (1 - d) * p;
        p *= 10;
        n /= 10;
    }
    printf("1's complement = %d", comp);
    return 0;
}