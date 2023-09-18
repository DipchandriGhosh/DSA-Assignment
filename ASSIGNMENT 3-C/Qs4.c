//  Write a program to check whether a matrix is sparse or not.

#include <stdio.h>

#define ROWS 3
#define COLS 3

int isSparse(int mat[ROWS][COLS]) {
    int zeroCount = 0;
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (mat[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    
    // A matrix is considered sparse if the number of zero elements is more than half of the total elements
    if (zeroCount > (ROWS * COLS) / 2) {
        return 1; // Sparse
    } else {
        return 0; // Not sparse
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {0, 0, 0},
        {0, 5, 0},
        {0, 0, 0}
    };

    if (isSparse(matrix)) {
        printf("The matrix is sparse.\n");
    } else {
        printf("The matrix is not sparse.\n");
    }

    return 0;
}