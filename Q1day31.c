//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>
int main()
{
    int n, i, key, found = 0;
    int a[100];
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Number found at position %d\n", i + 1);
            found++ ;
            break;
        }
    }
    if(found == 0)
        printf("Number not found\n");

    return 0;
}
