//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
30
Output 1:
Element found at index 2

Input 2:
4
5 10 15 20
25
Output 2:
Element not found
*/

#include <stdio.h>
int main() {
    int n, k, f=-1;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for(int i=0; i<n; i++) if(a[i]==k) { f=i; break; }
    if(f!=-1) printf("Element found at index %d", f);
    else printf("Element not found");
    return 0;
}