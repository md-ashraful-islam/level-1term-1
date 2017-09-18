#include<stdio.h>

int transfer(int n,int bits,int bit)
{
    return (((((~0)<<bits)^((~0)<<(bits+bit)))&n)>>bits);
}

void printbits(int n)
{
    int m=1;
    int i;
    for(i=sizeof(n)*8-1;i>=0;i--)
    {
        printf("%d",(n>>i)&m);
        if(i%8==0)
            printf("\t");
    }
    return;
}

typedef struct{
    int day:5;
    int month:4;
    int year:7;
}date;

typedef union{
    date birthday;
    int slnumber;

}identity;


int main()
{
    identity ac1;
    int n,i;
    scanf("%d",&n);
    printf("\n");
    printbits(n);
    printf("\n");

    ac1.slnumber=n;

    i=transfer(n,5,3);

    printf("\n");
    printbits(i);
    printf("\n");

    printf("%d-%d-%d",transfer(n,0,5),transfer(n,8,4),transfer(n,16,7));

    return 0;
}
