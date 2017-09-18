#include<stdio.h>
int isfactor(int n,int i);
int isprime(int n);
int main()
{
    int n,r,i,c=0;
    printf("enter your number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(1==isfactor(n,i) && 1==isprime(i))
        {
            printf("%d(%d)\n",i,hmt(n,i));
        }
    }
    return 0;
}
int isfactor(int n,int i)
{
    return !(n%i);
}
int isprime(int n)
{
    int i;
    if(n==2)
        return 1;
    else if(n<2 || n%2==0)
        return 0;
    else
    {
        for(i=3;i<n/2;i=i+2)
        {
            if(n%i==0)
                return 0;
        }
    }
    return 1;
}
int hmt(int n,int i)
{
    int c;
    for(c=0;n%i==0;c++)
    {
        n=n/i;
    }
    return c;
}
