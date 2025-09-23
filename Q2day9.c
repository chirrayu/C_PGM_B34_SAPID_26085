//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.

/*
Sample Test Cases:
Input 1:
85
Output 1:
Grade B

Input 2:
55
Output 2:
Grade F
*/

#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    if(m >= 90 && m <= 100)
    {
        printf("Grade A");
    }
    else if(m >= 80)
    {
        printf("Grade B");
    }
    else if(m >= 70)
    {
        printf("Grade C");
    }
    else if(m >= 60)
    {
        printf("Grade D");
    }
    else if(m >= 0)
    {
        printf("Grade F");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}