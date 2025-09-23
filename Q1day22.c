//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
145 is a strong number.   // 1! + 4! + 5! = 1 + 24 + 120 = 145

Input 2:
123
Output 2:
123 is not a strong number.
*/

#include <stdio.h>
int f(int x) {
    if(x<=1) return 1;
    int r=1;
    for(int i=2; i<=x; i++) r*=i;
    return r;
}
int main() {
    int n, t, s=0;
    scanf("%d", &n);
    t = n;
    while(t) {
        s += f(t%10);
        t /= 10;
    }
    if(s==n) printf("%d is a strong number.", n);
    else printf("%d is not a strong number.", n);
    return 0;
}