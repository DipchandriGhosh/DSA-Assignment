//      Write a program to find second highest from an array. (Do not use sorting)

#include<stdio.h>

int main()
{
    int size, max1=0, max2=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(max1>arr[i] && arr[i]>max2)
        {
            max2=arr[i];
        }
    }
    printf("Second highest element = %d",max2);
}