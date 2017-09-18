#include<stdio.h>
long int nCr(int n,int r);
int factorial(int n);
int main()
{
    int i,j,k,fibo;
    printf("First 10 Fibonacci number is: \n");
    for(i=0;i<10;i++)
    {
        fibo=0;
        for(j=0,k=i;j<=i;j++,k--)
        {
            if(j+k==i)
            {
                fibo=fibo+nCr(k,j);
            }
        }
        printf("%d\t",fibo);
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
