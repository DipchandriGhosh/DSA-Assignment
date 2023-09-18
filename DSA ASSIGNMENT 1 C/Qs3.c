/*         1
          2 3
         4 5 6
        7 8 9 10    */

#include<stdio.h>
int main()
{
    int i,j,k,s=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            s++;
            printf("%d ",s);
        }
        printf("\n");
    }
}