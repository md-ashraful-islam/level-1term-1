#include<stdio.h>
int main()
{
    int n,i,ara[3],max,min,mid,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&ara[0],&ara[1,&ara[2]);
        max=(ara[0]>ara[1])?((ara[0]>ara[2])?ara[0]:ara[2]):((ara[1]>ara[2])?ara[1]:ara[2]);
        min=(ara[0]<ara[1])?((ara[0]<ara[2])?ara[0]:ara[2]):((ara[1]<ara[2])?ara[1]:ara[2]);
        for(j=0;j<3;j++)
        {
            if(ara[j]!=max && ara[j]!=min)
            {
                mid=ara[j];
            }
        }
        printf("Case %d: %d %d %d",i,min,mid,max);
        if(i!=n)
        {
            printf("\n");
        }
    }
    return 0;
}
