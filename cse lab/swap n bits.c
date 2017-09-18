#include<stdio.h>
void printbits(int n)
{
    int m=1;
    int i;
    for(i=sizeof(n)*8-1;i>=0;i--)
    {
        printf("%d",(n>>i)&m);
        if(i%16==0)
            printf("\t");
        if(i%8==0)
            printf("  ");
        if(i%4==0)
            printf("  ");
    }
    return;
}
int swapbits(int x,int n)
{
    int s=sizeof(x),i,p=0;
    unsigned int y=x,m=~0;
    for(i=1;i<=s/(2*n);i++)
    {
        p=p|(((y<<n)&(~(m<<2*n)))|((y>>n)&(~(m<<n))));
        if(i!=s/(2*n))
            p=p<<2*n;
        y=y>>2*n;
    }
    return p;
}
int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("\n\n Bits of your integer is \n\n");
    printbits(a);

    a=swapbits(a,16);

    printf("\n\n Bits of your integer after swaping 16 bits is \n\n");
    printbits(a);
    return 0;
}
