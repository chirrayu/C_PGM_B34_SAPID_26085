//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
6
Output 1:
Array after insertion: 1 3 5 6 7 9

Input 2:
4
2 4 6 8
1
Output 2:
Array after insertion: 1 2 4 6 8
*/

#include<stdio.h>
int main()
{
    int n, e, pos = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &e);
    while(pos < n && a[pos] < e)
    {
        pos++;
    }
    for(int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = e;
    printf("Array after insertion: ");
    for(int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}