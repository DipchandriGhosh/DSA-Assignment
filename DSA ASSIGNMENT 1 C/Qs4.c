/*  Consider the given series and calculate the summation up-to ‘N’ number.
1+1+4+9+25+64+ .......... +N    */

#include<stdio.h>
#include<math.h>
 
int fibonacci(int n);

int main()
{
    int n,i,sum=0,fibsq=0;
    printf("Enter no. of numbers:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fibsq=pow(fibonacci(i),2);
        sum+=fibsq;
    }
    printf("Sum of the series is %d",sum);
}

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
    
}