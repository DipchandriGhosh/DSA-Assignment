//      Write a program to find frequency of a given number ‘k’.

#include<stdio.h>

void frequency(int arr[], int size, int k)
{
    int count=0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i]==k)
            count++;
    }
    printf("Frequency of %d = %d\n",k,count);
}
int main()
{
    int size,k;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number:");
    scanf("%d",&k);
    frequency(arr,size,k);
    return 0;
}