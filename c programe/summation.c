#include<stdio.h>
int main()
{
    int t,n,i,j,k,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        j=n%10;
        n=n/10000;
        k=n%10;
        sum=j+k;
        printf("sum = %d\n",sum);
    }
}
