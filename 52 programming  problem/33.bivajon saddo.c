#include<stdio.h>

int main()
{
    int i;
    unsigned long long int j;
    int t;
    unsigned long long int A,B,C;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld",&A,&B,&C);
        for(j=C;j<=B;j+=C)
            printf("%lld\n",j);

        if(i<t-1)
            printf("\n");
    }

    return 0;
}

