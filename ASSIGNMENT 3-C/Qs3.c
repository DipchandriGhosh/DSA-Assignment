// Rotate a given matrix in 90 degree .

#include<stdio.h>

#define n 4

void rotateMatrix(int mat[n][n])
{
    // Transpose of the matrix
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    // Reverse the rows to achive clockwise rotation
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[i][n-j-1];
            mat[i][n-j-1] = temp;
        }
    }
}

void printmatrix(int mat[n][n])
{
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j++) 
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[n][n] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15,16}

    };

    printf("Original Matrix:\n");
    printmatrix(matrix);

    rotateMatrix(matrix);
    printf("Rotated Matrix:\n");
    printmatrix(matrix);
    return 0;
}