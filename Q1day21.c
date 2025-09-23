//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
Swapped = 52341

Input 2:
7
Output 2:
Swapped = 7
*/

#include <stdio.h>
#include <math.h>
int main() {
    int n, t, d=0;
    scanf("%d", &n);
    if(n<10) { printf("Swapped = %d", n); return 0; }
    t = n;
    while(t) { d++; t/=10; }
    int last = n%10;
    int first = n / (int)pow(10,d-1);
    int mid = (n % (int)pow(10,d-1)) / 10;
    int res = last * (int)pow(10,d-1) + mid*10 + first;
    printf("Swapped = %d", res);
    return 0;
}