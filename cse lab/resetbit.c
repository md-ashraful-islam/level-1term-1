//Write down a function resetBit(x,p) that will reset a bit
//of integer x at position p leaving other bits unchanged.
//Assume 0<=p<=31

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
int setbit(int n,int p)
{
    return (n&(~(1<<p)));
}
int main()
{
    int a,p;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("Please enter a position which you want to reset: ");
    while(1)
    {
        scanf("%d",&p);
        if(p<0 || p>31)
            printf("\n!!!Please enter starting position CORRECTLY: ");
        else
            break;
    }

    printf("\nBits of the integer is \n");
    printbits(a);

    a=setbit(a,p);
    printf("\nBits of the integer after reset is \n");
    printbits(a);
    return 0;
}

