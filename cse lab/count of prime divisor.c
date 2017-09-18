#include<stdio.h>

int isprime(int n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    int i;
    for(i=3;i*i<=n;i+=2)
        if(n%i==0)
            return 0;

    return 1;
}

int howmanytime(int n,int i)
{
    int count=0;
    while(n%i==0)
    {
        count++;
        n/=i;
    }
    return count;
}


int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if((n%i==0) && (isprime(i)))
        {
            printf("COUNT of %d: %d\n",i,howmanytime(n,i));
        }
    }
    return 0;

}
