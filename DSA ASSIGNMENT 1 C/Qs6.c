//Write a program to delete an element from array.

#include<stdio.h>
void display(int arr[], int n)
{
    //  Traversal
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void indDeletion(int arr[], int size, int k)
{
    //Code for Deletion
    for(int i= k; i<size-1;i++)
    {
        arr[i] = arr[i+1];
    }
    
}
int main()
{
    int k,size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to be deleted:");
    scanf("%d",&k);
    display(arr, size);
    indDeletion(arr,size,k);
    size-=1;
    display(arr, size);
    return 0;
}
