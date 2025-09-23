//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Sum = 1.79   // 2/3 + 4/7 + 6/11 ≈ 0.67 + 0.57 + 0.55

Input 2:
2
Output 2:
Sum = 1.24   // 2/3 + 4/7 ≈ 0.67 + 0.57
*/

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    float s=0;
    int num=2, den=3;
    for(int i=0; i<n; i++) {
        s += (float)num/den;
        num += 2;
        den += 4;
    }
    printf("Sum = %.2f", s);
    return 0;
}