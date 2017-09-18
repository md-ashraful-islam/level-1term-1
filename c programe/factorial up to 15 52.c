#include<stdio.h>
int main()
{
    int n,i,t,j;
    long long int f=1;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        f=1;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            f=f*j;
        }
        printf("%lld\n",f);
    }
    return 0;
}
