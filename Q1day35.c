//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main() {
    int n, i;
    int a[5];
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int first = a[0], second = a[1];
    if (second > first) {
        int temp = first;
        first = second;
        second = temp;
    }

    for (i = 2; i < n; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        } else if (a[i] > second && a[i] != first) {
            second = a[i];
        }
    }

    printf("Second largest = %d\n", second);
    return 0;
}