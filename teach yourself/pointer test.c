#include<stdio.h>
int main()
{
    int a=10;
    double *d;
    d=&a;
    *d=100;
    printf("%d %lf",a,d);
}
