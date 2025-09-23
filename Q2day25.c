//Q50: Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *

/*
Sample Test Cases:
Input 1:
5
Output 1:
*****
 ****
  ***
   **
    *
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--)
    {
        for(int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}