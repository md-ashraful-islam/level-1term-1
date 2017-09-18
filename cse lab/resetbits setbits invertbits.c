#include<stdio.h>

void printbit(int n)
{
    int i,size=sizeof(n)*8;
    for(i=0;i<size;i++)
    {
        if((n>>(size-1-i) & 1))
            printf("1");
        else
            printf("0");
        if((i+1)%8==0)
            printf("  ");
    }
}

int setbis(int x,int p,int n)
{
    return (x| ((-1<<(p+1))^(-1<<(p-n+1))));
}

int resetbis(int x,int p,int n)
{
    return (x& (~((-1<<(p+1))^(-1<<(p-n+1)))));
}

int invertbis(int x,int p,int n)
{
    return (x^ ((-1<<(p+1))^(-1<<(p-n+1))));
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("Binary Representation of %d is: \n",n);
    printbit(n);
    printf("\n\nBinary Representation of resetbits of %d is: \n",n);
    printbit(resetbis(n,5,3));
    printf("\n\nBinary Representation of setbits of %d is: \n",n);
    printbit(setbis(n,5,3));
    printf("\n\nBinary Representation of invertbits of %d is: \n",n);
    printbit(invertbis(n,5,3));
    return 0;
}
