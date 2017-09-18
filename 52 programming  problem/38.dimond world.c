#include<stdio.h>

int main()
{
    int k,j,i;
    int t,n,m;
    scanf("%d",&t);

    for(k=0;k<t;k++)
    {
        scanf("%d%d",&n,&m);

        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("%d",m);
                if(j<i)
                    printf(" ");
            }



            printf("\n");
        }

        for(i=0;i<n-1;i++)
        {
            for(j=0;j<(n-i-1);j++)
            {
                printf("%d",m);
                if(j<(n-i-2))
                    printf(" ");
            }

            printf("\n");
        }

        if(k<t-1)
            printf("\n");
    }

    return 0;
}
