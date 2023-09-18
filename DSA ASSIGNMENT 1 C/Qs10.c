//      Write a program to merge two sorted array of length M & N. [M & N may not be equal].

#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter the size of first array:");
    scanf("%d",&m);
    int arr1[m];
    printf("Enter the elements in the first array:\n");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array:");
    scanf("%d",&n);
    int arr2[n];
    printf("Enter the elements in the second array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr[m+n];
    for(int i=0; i<m; i++)
    {
        arr[i] = arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        arr[m+i] =arr2[i];
    }
    for(int i=0; i<m+n; i++)
    {
        printf("%d ",arr[i]);
    }
}