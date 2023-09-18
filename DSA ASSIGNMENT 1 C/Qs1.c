/*  *
    # *
    # * #
    * # * #
    * # * # *   */

#include<stdio.h>

int main()
{
    int n,i,j,c;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            c++;
            if(c%2!=0)
                printf("* ");
            else
                printf("# ");
        }
        printf("\n");
    }
}