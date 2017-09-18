#include<stdio.h>
int main()
{
    int n,k,i;
    float c;
    scanf("%d%d",&n,&k);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    i=0;
    for(c=0;ara[n-1]>0;)
    {
        if(ara[i]>0)
        {
            ara[i]>=2*k?(c++,ara[i]=ara[i]-2*k):(c=c+0.5,ara[i]=ara[i]-k);
        }
        else i++;
    }
    i=c+.5;
    printf("%d",i);
    return 0;
}
