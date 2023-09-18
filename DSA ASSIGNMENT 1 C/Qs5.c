/*  Write a program to insert a new element in array at given location k.   */

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

int indInsertion(int arr[], int size, int element, int capacity, int k)
{
    if(size>=capacity)
    {
        return -1;
    }
    else{
        for(int i= size+1; i>k-1; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[k] = element;
        return 1;
    }
}
int main()
{
    int k, size, element;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size+1];
    printf("Enter the elements of the array:");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted:");
    scanf("%d",&element);
    printf("Enter the position:");
    scanf("%d",&k);
    display(arr, size);
    indInsertion(arr,size,element,size+1,k);
    size+=1;
    display(arr, size);
    return 0;
}