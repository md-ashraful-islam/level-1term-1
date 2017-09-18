#include<stdio.h>
int main()
{
    double n,r,d;
    printf("enter your number: ");
    scanf("%lf",&n);
    r=n/2;
    do
    {
        d=n-r*r;
        d=(d<0)?(-d):d;
        r=(r+n/r)/2.0;
    }while(d>.000001);
    printf("squre root is %lf",r);
    return 0;
}
