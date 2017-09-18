#include<stdio.h>
int ara[50]={0,1,1};
int fibonacci(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else if(ara[n]!=0)
        return ara[n];
    ara[n]=fibonacci(n-1)+fibonacci(n-2);
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n,i;
    printf("Enter term number: ");
    scanf("%d",&n);
    fibonacci(n);
    for(i=1;i<=n;i++)
        printf("%d\t",ara[i]);
    return 0;
}
