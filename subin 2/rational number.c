#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int p,q;
}rational;

int gcd(int x,int y)
{
    if(x%y==0)
        return y;
    else if(y%x==0)
        return x;
    return gcd(y,x%y);
}

int sumd(rational x,rational y)
{
    int t=gcd(x.p*y.q+x.q*y.p,x.q*y.q);
    return (x.q*y.q)/t;
}

int sumn(rational x,rational y)
{
    int t=gcd(x.p*y.q+x.q*y.p,x.q*y.q);
    return (x.p*y.q+x.q*y.p)/t;
}

int subd(rational x,rational y)
{
    int t=gcd(x.p*y.q-x.q*y.p,x.q*y.q);
    return (x.q*y.q)/t;
}

int muln(rational x,rational y)
{
    int t=gcd(x.p*y.p,x.q*y.q);
    return (x.p*y.p)/t;
}

int muld(rational x,rational y)
{
    int t=gcd(x.p*y.p,x.q*y.q);
    return (x.q*y.q)/t;
}

int divn(rational x,rational y)
{
    int t=gcd(x.p*y.q,x.q*y.p);
    return (x.p*y.q)/t;
}

int divd(rational x,rational y)
{
    int t=gcd(x.p*y.q,x.q*y.p);
    return (x.q*y.p)/t;
}

int subn(rational x,rational y)
{
    int t=gcd(x.p*y.q-x.q*y.p,x.q*y.q);
    return (x.p*y.q-x.q*y.p)/t;
}

int main()
{
    rational x,y;
    printf("Enter the numerator of first number: ");
    scanf("%d",&x.p);
    printf("Enter the denominator of first number: ");
    scanf("%d",&x.q);
    if(x.q==0)
    {
        printf("It is not defined.");
        return -1;
    }
    printf("\n");
    printf("Enter the numerator of second number: ");
    scanf("%d",&y.p);
    printf("Enter the denominator of second number: ");
    scanf("%d",&y.q);
    if(y.q==0)
    {
        printf("It is not defined.");
        return -1;
    }

    printf("\n\n");
    printf("The numerator of these rational number's sum is %d\n",sumn(x,y));
    printf("The denominator of these rational number,s sum is %d\n",sumd(x,y));

    printf("\n\n");
    printf("The numerator of these rational number's sub is %d\n",subn(x,y));
    printf("The denominator of these rational number,s sub is %d\n",subd(x,y));

    printf("\n\n");
    printf("The numerator of these rational number's mul is %d\n",muln(x,y));
    printf("The denominator of these rational number,s mul is %d\n",muld(x,y));

    printf("\n\n");
    printf("The numerator of these rational number's div is %d\n",divn(x,y));
    printf("The denominator of these rational number,s div is %d\n",divd(x,y));

    return 0;
}
