//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Sum = 2.08   // 1 + 0.75 + 0.83

Input 2:
4
Output 2:
Sum = 2.96   // 1 + 0.75 + 0.83 + 0.875
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float s = 0;
    int num = 1, den = 2;
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            s += 1;
        }
        else
        {
            s += (float)num / den;
            num += 2;
            den += 2;
        }
    }
    printf("Sum = %.2f", s);
    return 0;
}