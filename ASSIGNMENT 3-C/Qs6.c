//  Write a program to interchange different rows of a matrix.


#include<stdio.h>

#define m 3
#define n 3

void printmatrix(int mat[m][n])
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

void interchange(int mat[m][n], int row1, int row2)
{
    for (int j=0; j< n; j++) {
        int temp = mat[row1][j];
        mat[row1][j] = mat[row2][j];
        mat[row2][j] = temp;
    }
}

int main()
{
    int arr[m][n];
    printf("Enter the elements in the matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int row1, row2;
    printf("Enter the row numbers to interchange (0 to %d): ", m- 1);
    scanf("%d %d", &row1, &row2);

    if(row1 < 0 || row1 >= m || row2 < 0 || row2 >= m) {
        printf("Invalid row numbers.\n");
        return 1;
    }

    printf("\nThe original matrix is :\n");
    printmatrix(arr);

    interchange(arr, row1, row2);
    printf("\nAfter interchanging the rows, the new matrix is : \n");
    printmatrix(arr);
    return 0;
}