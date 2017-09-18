#include<stdio.h>
long long int fibo(n)
{
    if(n==1 || n==2)
        return 1;
    else if(n<1)
        return 0;
    return fibo(n-1)+fibo(n-2);
}

void printfibo(n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%lld\n",fibo(i));
    }
}
int main()
{
    printfibo(45);
    return 0;
}
