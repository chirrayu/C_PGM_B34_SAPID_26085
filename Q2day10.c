//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Wednesday

Input 2:
7
Output 2:
Sunday
*/

#include<stdio.h>
int main()
{
    int d;
    scanf("%d", &d);

    if (d == 1) {
        printf("Monday");
    } else if (d == 2) {
        printf("Tuesday");
    } else if (d == 3) {
        printf("Wednesday");
    } else if (d == 4) {
        printf("Thursday");
    } else if (d == 5) {
        printf("Friday");
    } else if (d == 6) {
        printf("Saturday");
    } else if (d == 7) {
        printf("Sunday");
    } else {
        printf("Invalid day");
    }

    return 0;
}
