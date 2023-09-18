//Write a program to remove duplicate elements from array.

#include<stdio.h>

void indDeletion(int arr[], int size)
{
    //Code for Deletion of duplicate elements
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k = j; k < size; k++)
                {
                    arr[k] = arr[k+1];
                }
                size--;
            }
        }
    }
    printf("After deletion of duplicate elements:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    indDeletion(arr,size);
    return 0;
}