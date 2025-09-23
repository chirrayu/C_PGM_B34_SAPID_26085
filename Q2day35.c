//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
Rotated array: 4 5 1 2 3

Input 2:
4
10 20 30 40
1
Output 2:
Rotated array: 40 10 20 30
*/

#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    k = k % n;
    for(int i = n - k; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for(int i = 0; i < n - k; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}