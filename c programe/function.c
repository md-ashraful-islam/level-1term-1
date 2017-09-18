#include<stdio.h>
#include<math.h>
int abs(int n)
{
    if(n<0)
        return -n;
    return n;
}
int main()
{
    int n,i,max=0,j,a;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n-1;i++)
    {
        a=0;
        for(j=i;j<n-1;j++)
        {
            a=a+abs(ara[j]-ara[j+1])*pow(-1,j-i);
            if(max<a)
                max=a;
        }
    }
    printf("%d",max);
    return 0;
}
