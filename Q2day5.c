//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3665
Output 1:
01:01:05

Input 2:
7200
Output 2:
02:00:00
*/

#include<stdio.h>
int main()
{
    int s,h,m,sec;
    printf("enter time in sec");
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    sec=s%60;
    printf("%02d:%02d:%02d",h,m,sec);
    return 0;
}