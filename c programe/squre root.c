#include<stdio.h>
int main()
{
    double d,n,r;
    printf("enter your number: ");
    scanf("%lf",&n);
    r=00000.000;
    do{

        d=n-r*r;
        if(d<=0.0000001)
            break;
        else
            r=r+0.0000001;
    }while(1);
    printf("%lf",r);
    return 0;
}
