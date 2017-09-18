#include<stdio.h>
int compare(int ara[],int l)
{
    int i=0,k=0,m,n,o,max=0;
    for(i=0;i<l;i++)
    {
        if(ara[i]!=ara[i+1])
        {
            k=k+2;
        }
        else
        {
            if(k!=0)
            k=k-2;
        }
        if(max<k)
            max=k;
    }
    return max;
}
int main()
{
    int t,i,ara[1000];
    scanf("%d",&t);
    for(i=0;i<2*t;i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("%d",compare(ara,2*t));
    return 0;
}
