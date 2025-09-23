//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
Merged array: 1 2 3 4 5

Input 2:
2
10 20
3
5 15 25
Output 2:
Merged array: 10 20 5 15 25
*/

#include <stdio.h>
int main() {
    int n1, n2;
    scanf("%d", &n1);
    int a[n1];
    for(int i=0; i<n1; i++) scanf("%d", &a[i]);
    scanf("%d", &n2);
    int b[n2];
    for(int i=0; i<n2; i++) scanf("%d", &b[i]);
    int m[n1+n2];
    for(int i=0; i<n1; i++) m[i] = a[i];
    for(int i=0; i<n2; i++) m[n1+i] = b[i];
    printf("Merged array: ");
    for(int i=0; i<n1+n2; i++) printf("%d ", m[i]);
    return 0;
}