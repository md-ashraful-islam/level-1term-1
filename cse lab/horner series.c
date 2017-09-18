#include<stdio.h>

double horner(double a[],int n,double x)
{
    static int i=0;
    if(i==n)
        return a[n];
    i++;
    return a[i-1]+x*horner(a,n,x);
}

int main()
{
    int n,i;
    double x;
    printf("Please enter degree of series: ");
    scanf("%d",&n);
    double a[n+1];
    printf("Please enter co-efficient of the series \n");
    for(i=0;i<=n;i++)
        scanf("%lf",&a[i]);

    printf("Please enter the value of x: ");
    scanf("%lf",&x);

    printf("Result is %G.",horner(a,n,x));

    return 0;
}
