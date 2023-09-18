// Write a program to print the sum of the diagonal element of the M*N square matrix.

#include<stdio.h>
int main()
{
    int sum=0,ld=0,rd=0;
    int m,n;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    if(m!=n)
    {
        printf("The entered values are not equal.\n");
    }
    printf("Enter the elements in the matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(j==i)
    //         {
    //             ld+=arr[i][j];
    //         }
    //         else if (j+i==(m-1))
    //         {
    //             rd+=arr[i][j];
    //         }
            
    //     }
    // }

    for(int i=0;i<n;i++)
    {
        ld += arr[i][i];
        rd += arr[i][n-i-1];
    }
    sum=ld+rd;
    printf("\nSum of the diagonal elements is %d\n",sum);
    return 0;
}
