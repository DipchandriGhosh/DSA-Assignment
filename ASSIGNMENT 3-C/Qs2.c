// Write a program to store following numbers ( 1 to 9) in a matrix in spiral manner.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d",&n);
    int arr[n][n];
    int r1 = 0, r2 = n-1;
    int c1 = 0, c2 = n-1;
    int val = 1;

    while(r1<=r2 && c1<=c2)
    {
        // moving left to right
        for (int c = c1; c<=c2; c++)
        arr[r1][c] = val++;

        // move down
        for (int r=r1+1; r <= r2; r++)
        arr[r][c2]=val++;

        if(r1<r2 &&c1<c2)
        {
            // moving right to left
            for(int c=c2-1; c>=c1; c--)
            arr[r2][c]=val++;

            // mpving up
            for(int r=r2-1; r>=r1+1; r--)
            arr[r][c1]=val++;
        }
        r1++;
        r2--;
        c1++;
        c2--;
    }

    // printing
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
