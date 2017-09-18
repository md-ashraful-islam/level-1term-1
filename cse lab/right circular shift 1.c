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

int rightshift(int n)
{
    unsigned int i=n;
    return ((i>>1)|((i&1)<<(sizeof(i)*8-1)));
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("Binary Representation of %d is: \n",n);
    printbit(n);
    printf("\n\nBinary Representation of after right shift %d is: \n",n);
    printbit(rightshift(n));
    return 0;
}
