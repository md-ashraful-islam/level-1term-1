#include<stdio.h>

int main()
{
    int a,n;
    scanf("%d%d",&a,&n);
    int i,sum=0;

    for(i=0;i<=n;i++)
    {
        sum+=(a-i)*(a-i)*((i%2)?-1:1);
    }

    printf("%d",sum);
    return 0;
}
