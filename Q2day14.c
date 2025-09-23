//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Product = 48   // 2*4*6

Input 2:
5
Output 2:
Product = 8    // 2*4
*/

#include<stdio.h>
int main()
{
    int n, p = 1;
    scanf("%d", &n);
    for(int i = 2; i <= n; i += 2)
    {
        p *= i;
    }
    printf("Product = %d", p);
    return 0;
}