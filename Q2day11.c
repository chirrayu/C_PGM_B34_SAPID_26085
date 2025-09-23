//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
500 600
Output 1:
Profit = 100.00
Profit% = 20.00%

Input 2:
800 700
Output 2:
Loss = 100.00
Loss% = 12.50%
*/

#include<stdio.h>
int main()
{
    float cp, sp;
    float p = sp - cp;
    float l = cp - sp;
    scanf("%f%f", &cp, &sp);
    if(sp > cp)
    {
    
        printf("Profit = %.2f\n", p);
        printf("Profit%% = %.2f%%", (p / cp) * 100);
    }
    else if(cp > sp)
    {
        printf("Loss = %.2f\n", l);
        printf("Loss%% = %.2f%%", (l / cp) * 100);
    }
    else
    {
        printf("No profit, no loss.");
    }
    return 0;
}