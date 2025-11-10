//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>
int main() {
    int n, k, i, j = 0;
    int a[100], temp[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k (rotate right by k): ");
    scanf("%d", &k);

    k = k % n;

    for (i = n - k; i < n; i++) {
        temp[j] = a[i];
        j++;
    }

    for (i = 0; i < n - k; i++) {
        temp[j] = a[i];
        j++;
    }

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}
