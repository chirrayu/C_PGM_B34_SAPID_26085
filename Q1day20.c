//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
Product of odd digits = 3   // 1*3

Input 2:
2468
Output 2:
Product of odd digits = 1   // no odd digits → product is 1
*/

#include <stdio.h>
int main() {
    int n, p=1, f=0;
    scanf("%d", &n);
    while(n) {
        int d = n%10;
        if(d%2) { p*=d; f=1; }
        n/=10;
    }
    if(!f) p=1;
    printf("Product of odd digits = %d", p);
    return 0;
}