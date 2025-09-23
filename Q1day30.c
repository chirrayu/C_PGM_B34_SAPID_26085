//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
Even: 2
Odd: 3

Input 2:
4
2 4 6 8
Output 2:
Even: 4
Odd: 0
*/

#include <stdio.h>
int main() {
    int n, e=0, o=0;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i]%2) o++; else e++;
    }
    printf("Even: %d\n", e);
    printf("Odd: %d", o);
    return 0;
}