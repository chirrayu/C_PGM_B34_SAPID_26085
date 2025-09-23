//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
1223334
Output 1:
Most frequent digit: 3

Input 2:
112233
Output 2:
Most frequent digit: 1   // or 2 or 3 — pick first if tie
*/

#include<stdio.h>
int main()
{
    int n, f[10] = {0}, mx = 0, dgt = 0;
    scanf("%d", &n);
    if(n == 0)
    {
        f[0] = 1;
    }
    while(n != 0)
    {
        f[n % 10]++;
        n /= 10;
    }
    for(int i = 0; i < 10; i++)
    {
        if(f[i] > mx)
        {
            mx = f[i];
            dgt = i;
        }
    }
    printf("Most frequent digit: %d", dgt);
    return 0;
}