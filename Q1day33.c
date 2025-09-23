//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
5
Output 1:
Element found at index 2

Input 2:
5
2 4 6 8 10
7
Output 2:
Element not found
*/

#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    int l=0, h=n-1, m, f=-1;
    while(l<=h) {
        m = (l+h)/2;
        if(a[m]==k) { f=m; break; }
        else if(a[m]<k) l=m+1;
        else h=m-1;
    }
    if(f!=-1) printf("Element found at index %d", f);
    else printf("Element not found");
    return 0;
}