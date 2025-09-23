//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
99
Output 1:
Array after insertion: 1 2 99 3 4 5

Input 2:
3
10 20 30
1
5
Output 2:
Array after insertion: 5 10 20 30
*/

#include <stdio.h>
int main() {
    int n, p, e;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d %d", &p, &e);
    for(int i=n; i>=p; i--) a[i] = a[i-1];
    a[p-1] = e;
    printf("Array after insertion: ");
    for(int i=0; i<=n; i++) printf("%d ", a[i]);
    return 0;
}