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

int main()
{
    int n;
    scanf("%d",&n);
    printf("Binary Representation of %d is: \n",n);
    printbit(n);
    return 0;
}
