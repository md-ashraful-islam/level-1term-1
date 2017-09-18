#include<stdio.h>
long long int ara[100];
int fibo(int n)
{
    static int i=0;
    if(n==1 || n==2)
    {
        ara[1]=1;
        ara[2]=1;
        return 1;
    }
    else if(n<1)
        return 0;
    ara[n]=fibo(n-1)+fibo(n-2);
    i++;
    return ara[n];
}
int main()
{
    int i=0,n;
    printf("Enter your number: ");
    scanf("%d",&n);
    fibo(n);
    for(i=1;i<n;i++)
    {
        printf("%lld\n",ara[i]);
    }
    return 0;
}
