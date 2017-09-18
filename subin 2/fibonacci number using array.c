#include<stdio.h>
long long int ara[100];
long long int fibo(int n)
{
    if(n==1 || n==2)
        return 1;
    if(ara[n]!=0)
        return ara[n];
    ara[n]=fibo(n-1)+fibo(n-2);
    return ara[n];
}
int main()
{
    int i;
    for(i=0;i<101;i++)
    {
        ara[i]=0;
    }
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("The %dth element is %lld\n",i,fibo(i));
    }
    return 0;
}
