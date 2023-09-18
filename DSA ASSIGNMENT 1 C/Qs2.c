/*     A
      B B
     C C C
    D D D D     */

#include<stdio.h>
int main()
{
    int i,j,k;
    //printf("Enter no. of rows:");
    //scanf("%d",&n);
    for(i=1;i<=4;i++)
    {
        for(j=i;j<4;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c ",i+64);
        }
        printf("\n");
    }
}