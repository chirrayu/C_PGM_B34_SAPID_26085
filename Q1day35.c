//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 5 8 15
Output 1:
Second largest = 15

Input 2:
4
1 2 3 4
Output 2:
Second largest = 3
*/

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    int f=a[0], s=-999999;
    for(int i=1; i<n; i++) {
        if(a[i]>f) { s=f; f=a[i]; }
        else if(a[i]>s && a[i]!=f) s=a[i];
    }
    if(s==-999999) printf("No second largest element found.");
    else printf("Second largest = %d", s);
    return 0;
}