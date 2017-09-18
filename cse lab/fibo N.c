#include<stdio.h>
int i,ara[100]={0,1,1};
int fibonacci(int n,int N)
{
    if(n==1 && n==2)
        return 1;
    else if(ara[n]!=0)
        return ara[n];
    for(i=((n<=N)?1:n-N);i<n;i++)
    {
        ara[n]=ara[n]+fibonacci(i,N);
    }
    return ara[n];
}
int main()
{
    int n,i,N;
    printf("Enter term number: ");
    scanf("%d",&n);
    printf("Enter fibo number: ");
    scanf("%d",&N);
    fibonacci(n,N);
    for(i=1;i<=n;i++)
        printf("%d\t",ara[i]);
    return 0;
}

