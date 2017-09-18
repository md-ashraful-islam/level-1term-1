#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double x=n/2,d;
    do{
        d=n-x*x;
        d=(d<0)?-d:d;
        x=(x+n/x)/2;

    }while(d>.00000001);

    printf("%lf",x);
    return 0;
}
