//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum = 15

Input 2:
10
Output 2:
Sum = 55
*/

#include<stdio.h>
int main()
{
    int n,s=0;
    printf("type the natural no. till which sum to done");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf(s+=i);
    }
    printf("Sum = %d",s);
    return 0;
}