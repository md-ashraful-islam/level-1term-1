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
            printf("\t");
    }
    return;
}
int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("\n\n Bits of your integer is \n\n");
    printbits(a);

    unsigned int b=a;

    a=(a<<16)|(b>>16);

    printf("\n\n Bits of your integer after swaping 16 bits is \n\n");
    printbits(a);
    return 0;
}
