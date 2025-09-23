//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
Sum = 15

Input 2:
3
-1 0 1
Output 2:
Sum = 0
*/

#include <stdio.h>
int main() {
    int n, s=0;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    printf("Sum = %d", s);
    return 0;
}