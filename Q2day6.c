//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero
*/

#include<stdio.h>
int main(){
int n;
printf("enter a no.");
scanf("%d",&n);
if(n>0)
{
    printf("Positive");
}
else if(n<0)
{
    printf("Negative");
}
else 
{
    printf("Zero");
}
return 0;
}