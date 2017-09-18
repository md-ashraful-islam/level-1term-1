#include<stdio.h>

void showits(int x)
{
    int s=sizeof(x)*8;
    int i;
    for(i=s-1;i>=0;i--)
    {
        printf("%d",((x>>i) & 1));
        if((i)%8==0)
            printf(" ");
    }
}

int setbit(int x,int p)
{
    return x | (1<<p);
}

int resetbit(int x,int p)
{
    return x & (~(1<<p));
}


int main()
{
    int x,p,n;
    scanf("%d%d",&x,&p);
    printf("Bits before set: \n");
    showits(x);
    printf("\nBits after set: \n");
    showits(setbit(x,p));


    printf("\nBits after reset: \n");
    showits(resetbit(x,p));

    return 0;
}
