#include<stdio.h>
int factorial(int n);
long int nCr(int n,int r);
int digit(long int n);
int main()
{
    int n,i,j,k;
    printf("please enter number of row that you want to see: ");
    scanf("%d",&n);
    while(1)
    {
        if(n>=0)
        {
            break;
        }
        printf("please enter right number: ");
        scanf("%d",&n);
    }
    for(i=0;i<=n;i++)
    {
        for(k=0;k<(n-i);k++)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            printf(" %ld",nCr(i,j));
            if(j!=n && 1==digit(nCr(i,j)))
            {
                printf(" ");
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
        printf("Do not defined.");
        scanf("%d",&n);
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
int digit(long int n)
{
    int i=0;
    while(n>0)
    {
        i++;
        n=n/10;
    }
    return i;
}

