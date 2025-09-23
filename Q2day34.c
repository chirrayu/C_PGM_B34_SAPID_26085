//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Array after deletion: 1 2 4 5

Input 2:
4
10 20 30 40
1
Output 2:
Array after deletion: 20 30 40
*/

#include<stdio.h>
int main()
{
    int n, p;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &p);
    for(int i = p - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    printf("Array after deletion: ");
    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}