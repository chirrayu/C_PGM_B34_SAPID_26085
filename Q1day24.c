//Q47: Write a program to print the following pattern:
//*
//**
//***
//****
//*****

/*
Sample Test Cases:
Input 1:
5
Output 1:
*
**
***
****
*****
*/

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) printf("*");
        printf("\n");
    }
    return 0;
}