//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days late: ₹6/day 
//More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Fine = ₹28.00

Input 2:
35
Output 2:
Membership Cancelled.
*/

#include <stdio.h>

int main()
{
    int days;
    float fine = 0;
    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5)
        fine = days * 2;
    else if (days <= 10 && days >5)
        fine = (5 * 2) + ((days - 5) * 4);
    else if (days <= 30 && days > 10)
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    else {
        printf("Membership Cancelled.");
        return 0;
    }

    printf("Fine = %f", fine);
    return 0;

}
