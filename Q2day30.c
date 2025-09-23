//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
1 -2 0 4 -1
Output 1:
Positive: 2
Negative: 2
Zero: 1

Input 2:
3
0 0 0
Output 2:
Positive: 0
Negative: 0
Zero: 3
*/

#include<stdio.h>
int main()
{
    int n, p = 0, neg = 0, z = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > 0)
        {
            p++;
        }
        else if(a[i] < 0)
        {
            neg++;
        }
        else
        {
            z++;
        }
    }
    printf("Positive: %d\n", p);
    printf("Negative: %d\n", neg);
    printf("Zero: %d", z);
    return 0;
}