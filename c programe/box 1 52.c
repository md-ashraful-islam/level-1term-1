#include<stdio.h>
int main()
{
    int k,t,i,n,j;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
       scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
