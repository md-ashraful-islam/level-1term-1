#include<stdio.h>
#include<math.h>
int issqr(int a)
{
    double sq;
    int sqr;
    sq=sqrt(a);
    sqr=sq;
    if((sq==sqr))
        return 1;
    else
        return 0;
}
int main()
{
    int a,b,c,sq=0;
    float sqr;
    printf("enter three number: ");
    scanf("%d%d%d",a,b,c);
    if(issqr(a))
        sq=a;
    if(issqr(b))
    {
        if(sq<b)
            sq=b;
    }
    if(issqr(c))
    {
        if(sq<c)
            sq=c;
    }
    printf("%d",sq);
    return 0;
}
