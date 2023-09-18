//  Write a program to reverse a string.


#include <stdio.h>
#include<string.h>

int main() 
{
    char str[20];
    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);
    printf("Original String : %s\n",str);
    strrev(str);
    printf("Reversed String : %s\n",str);

}