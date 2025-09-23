//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
LCM = 36

Input 2:
5 7
Output 2:
LCM = 35
*/

#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int m = (a>b)?a:b;
    while(1) {
        if(m%a==0 && m%b==0) {
            printf("LCM = %d", m);
            break;
        }
        m++;
    }
    return 0;
}