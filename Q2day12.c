//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
250
Output 1:
Total bill = ₹1800.00

Input 2:
80
Output 2:
Total bill = ₹400.00
*/

#include<stdio.h>
int main()
{
    int u;
    scanf("%d", &u);
    float b = 0;
    if(u <= 100)
    {
        b = u * 5;
    }
    else if(u <= 200)
    {
        b = 500 + (u - 100) * 7;
    }
    else if(u <= 300)
    {
        b = 500 + 700 + (u - 200) * 10;
    }
    else
    {
        b = 500 + 700 + 1000 + (u - 300) * 12;
    }
    printf("Total bill = ₹%.2f", b);
    return 0;
}