//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Before swap: a=5, b=10
After swap: a=10, b=5

Input 2:
-3 7
Output 2:
Before swap: a=-3, b=7
After swap: a=7, b=-3
*/

#include<stdio.h>
int main(){
int a,b,t;
printf("enter first no.");
scanf("%d",&a);
printf("enter second no.");
scanf("%d",&b);
printf("Before swap: a=%d, b=%d\n",a,b);
t=a;
a=b;
b=t;
printf("After swap: a=%d, b=%d",a,b);
return 0;
}