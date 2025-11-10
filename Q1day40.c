//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int r, c;
    int mat[r][c];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Diagonal traversal:\n");
    for (int j = 0; j < c; j++) {
        int x = 0, y = j;
        while (x < r && y >= 0) {
            printf("%d ", mat[x][y]);
            x++; y--;
        }
    }
    for (int i = 1; i < r; i++) {
        int x = i, y = c - 1;
        while (x < r && y >= 0) {
            printf("%d ", mat[x][y]);
            x++; y--;
        }
    }
    printf("\n");
    return 0;
}
