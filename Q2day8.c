//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
10 25 15
Output 1:
25 is largest

Input 2:
-5 -2 -10
Output 2:
-2 is largest
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c) 
    {
        printf("%d is largest",a);
    }
    else if(b>=a&&b>=c)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
return 0;
}