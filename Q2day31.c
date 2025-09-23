//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
Reversed array: 5 4 3 2 1

Input 2:
4
10 20 30 40
Output 2:
Reversed array: 40 30 20 10
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
    for(int i = 0; i < n / 2; i++)
    {
        int t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}