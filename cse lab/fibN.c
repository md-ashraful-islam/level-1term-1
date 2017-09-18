#include<stdio.h>
int ara[100]={0};
int fiboN1(int N,int n)
{
    static int j;
    if(n==1)
    {
        ara[1]=1;
        return ara[1];
    }
    else if
    else
    {
        for(j=n-1;j>0;j--)
        {
            ara[n]=fiboN1(N,j);
        }
        return fib;
    }
}
int fiboN2(int N,int n)
{
    static int fib,j;
    if(n==1)
    {
        fib=1;
        return fib;
    }
    else
    {
        for(j=n-1;j>=N-n;j--)
        {
            fib=fib+fiboN2(N,j);
        }
        return fib;
    }
}
int main()
{
    int n,N;
    printf("Enter the number N you want to see as fiboN: ");
    scanf("%d",&N);
    printf("Enter the term you want to see in fiboN: ");
    scanf("%d",&n);
    if(n<=N)
        printf("fiboN is %d",fiboN1(N,n));
    else
        printf("fiboN is %d",fiboN2(N,n));
    return 0;
}
