#include<stdio.h>

double power(float x,int n)
{
    if(n==1)
        return x;
    if(n%2==0)
    {
        double d=power(x,n/2);
        return d*d;
    }
    else
    {
        double d=power(x,(n-1)/2);
        return x*d*d;
    }
}

int main()
{
    int n;
    float x;
    scanf("%f%d",&x,&n);
    if(x==0 && n==0)
    {
        printf("This is not defined.");
        return -1;
    }
    printf("%G",power(x,n));
    return 0;
}
