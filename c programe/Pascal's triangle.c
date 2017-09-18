#include<stdio.h>
int factorial(int n);
long int nCr(int n,int r);
int main()
{
    int i,j,k;
    for(i=0;i<=5;i++)
    {
        for(k=0;k<(5-i);k++)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            printf(" %ld",nCr(i,j));
            if(j!=5)
            {
                printf("  ");
            }
            else
            {
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
long int nCr(int n,int r)
{
    if(n>=r && n>=0 && r>=0)
        return ((factorial(n))/(factorial(r)*factorial(n-r)));
    else
        return 0;
}
int factorial(int n)
{
    int i,fact=1;
    if(n<0)
    {
        printf("Do not defined.Please enter correct number.");
    }
    else if(n==0)
        return 1;
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
    }
    return fact;
}


