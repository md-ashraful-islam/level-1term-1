#include<stdio.h>

int gcd(int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;

    if(a==1 || b==1)
        return 1;

    if(a%b==0)
        return b;
    if(b%a==0)
        return a;

    register int i;

    if(a>b)
    {
        for(i=b-1;i>=1;i--)
            if(a%i==0)
                return i;
    }
    else
        for(i=a-1;i>=1;i--)
            if(b%i==0)
                return i;

}

int main()
{
    int i;
    register unsigned long long int j;

    int t,A,B,v;
    unsigned long long int C;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d%lld",&A,&B,&C);

        v=(A*B)/gcd(A,B);
        for(j=v;j<=C;j+=v)
            printf("%lld\n",j);

        if(i<t-1)
            printf("\n");
    }

    return 0;
}


