//setBits(x,p,n)
//Write down a function setBits(x,p,n) that will set the n
//bits of the integer x starting from position p leaving
//other bits unchanged. Assume 0<=p<=31 and n<=p+1

#include<stdio.h>

void printbits(int n)
{
    int m=1;
    int i;
    for(i=sizeof(n)*8-1;i>=0;i--)
    {
        printf("%d",(n>>i)&m);
        if(i%4==0)
            printf("\t");
    }
    return;
}

int resetbits(int a,int p,int n)
{
    int s=sizeof(a)*8;
    if((p+n)<s)
        return a&(~((-1<<p)^(-1<<(p+n))));
    return a&((-1<<p)^(-1<<((p+n)%s)));
}

int main()
{
    int a,p,n;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("Please enter starting position: ");
    while(1)
    {
        scanf("%d",&p);
        if(p<0 || p>31)
            printf("\n!!!Please enter starting position CORRECTLY: ");
        else
            break;
    }
    printf("Please enter number of bits you want to reset: ");

    while(1)
    {
        scanf("%d",&n);
        if(n>p+1 || n<0)
            printf("\n!!!Please enter number of bits you want to reset CORRECTLY: ");
        else
            break;
    }

    printf("\nBits of the integer is \n");
    printbits(a);

    a=resetbits(a,p,n);
    printf("\nBits of the integer after reset is \n");
    printbits(a);
    return 0;
}

