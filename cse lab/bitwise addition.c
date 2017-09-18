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
    int s=0,a=15,b=7,c=0,i;
//    for(i=0;i<32;i++)
//    {
//        s|=(((((a>>i)&1)^((b>>i)&1)^((c>>i)&1)))<<i);
//        c|=(((((a>>i)&1)&((b>>i)&1))|(((b>>i)&1)&((c>>i)&1))|(((c>>i)&1)&((a>>i)&1)))<<(i+1));
//    }
//`
//    printf("%d\n",a&(1<<1));

    for(i=0;i<32;i++)
    {
        s|=((a^b^c)&(1<<i));
        c|=(((a&b)|(a&c)|(b&c))&(1<<i))<<1;
        printf("\n");
        printbit(c);
    }

    printf("%d",s);


    return 0;
}
