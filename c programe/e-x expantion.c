#include<stdio.h>
int main()
{
    double r=0,x;
    int i,n;
    printf("enter term number: ");
    scanf("%d",&n);
    printf("enter value of x: ");
    scanf("%lf",&x);
    for(i=0;i<=n;i++)
    {
        r=r+pow(-x,i)/factorial(i);
    }
    printf("result is %lf",r);
    return 0;
}
int factorial(int n)
{
    if(n==0)
        return 1;
    else
    {
        int i;
        int f=1;
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        return f;
    }
}
