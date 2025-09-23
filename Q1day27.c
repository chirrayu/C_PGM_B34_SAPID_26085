//Q53: Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*

/*
Sample Test Cases:
Input 1:
5
Output 1:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    // Upper
    for(int i=1; i<=n; i++) {
        for(int s=1; s<=n-i; s++) printf(" ");
        for(int j=1; j<=2*i-1; j++) printf("*");
        printf("\n");
    }
    // Lower
    for(int i=n-1; i>=1; i--) {
        for(int s=1; s<=n-i; s++) printf(" ");
        for(int j=1; j<=2*i-1; j++) printf("*");
        printf("\n");
    }
    return 0;
}