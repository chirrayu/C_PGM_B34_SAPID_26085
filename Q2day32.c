//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>
int main() {
    long num;
    printf("Enter a number: ");
    scanf("%ld", &num);

    if (num < 0) num = -num;
    int count[10] = {0};
    if (num == 0) count[0] = 1;
    else {
        while (num > 0) {
            count[num % 10]++;
            num /= 10;
        }
    }

    int maxCount = count[0], digit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            digit = i;
        }
    }

    printf("Digit %d appears most (%d times)\n", digit, maxCount);
    return 0;
}
