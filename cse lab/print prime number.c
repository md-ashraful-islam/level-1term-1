#include<stdio.h>

int isprime(int n)
{
    if(n<2 || n%2==0)
        return 0;
    if(n==2)
        return 1;
    int i;
    for(i=3;i*i<=n;i+=2)
        if(n%i==0)
            return 0;

    return 1;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
        if(isprime(i))
            printf("%d\n",i);

    return 0;
}
