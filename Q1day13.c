//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
+ 10 5
Output 1:
15.00

Input 2:
/ 10 0
Output 2:
Cannot divide by zero.
*/

#include <stdio.h>

int main()
{
    char op;
    float a, b;
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+': printf("%.2f", a + b); break;
        case '-': printf("%.2f", a - b); break;
        case '*': printf("%.2f", a * b); break;
        case '/':
            if (b != 0)
                printf("%.2f", a / b);
            else
                printf("Cannot divide by zero.");
            break;
        case '%':
            if ((int)b != 0)
                printf("%d", (int)a % (int)b);
            else
                printf("Cannot mod by zero.");
            break;
        default: printf("Invalid operator");
    }

    return 0;
}