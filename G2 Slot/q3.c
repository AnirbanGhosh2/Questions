#include <string.h>
#include <stdio.h>
#define PASS_LEN 10

int main() {
    char password[PASS_LEN] = "aeiceg";
    char input[4][4];
    char diagonal[4];
    int row, col;
    int diagonalIndex = 0;

    printf("Enter the 3x3 matrix:\n");

    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            scanf(" %c", &input[row][col]);

            if (row == col || row + col == 2) {
                diagonal[diagonalIndex++] = input[row][col];
            }
        }
    }

    diagonal[diagonalIndex] = '\0';

    if (strcmp(diagonal, password) == 0) {
        printf("Password correct.\n");
    } else {
        printf("Password incorrect.\n");
    }

return 0;
}
