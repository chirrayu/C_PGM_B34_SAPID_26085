//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
3 7 2 9 1
Output 1:
Max = 9
Min = 1

Input 2:
4
-1 -5 -2 -8
Output 2:
Max = -1
Min = -8
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int mx = a[0], mn = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > mx)
        {
            mx = a[i];
        }
        if(a[i] < mn)
        {
            mn = a[i];
        }
    }
    printf("Max = %d\n", mx);
    printf("Min = %d", mn);
    return 0;
}
