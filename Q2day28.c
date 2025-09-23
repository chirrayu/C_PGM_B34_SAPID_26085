//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
Array: 1 2 3 4 5

Input 2:
3
10 -5 0
Output 2:
Array: 10 -5 0
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
    printf("Array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}