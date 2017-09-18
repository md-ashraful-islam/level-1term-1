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
int main()
{
    int a,n;
    int s=sizeof(a)*8;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("Enter number of Bits you want to xtract: ");
    while(1)
    {
        scanf("%d",&n);
        if(n>s)
            printf("!!Enter number of Bits you want to xtract CORRECTLY: ");
        else
            break;
    }

    printf("\n Bits of your integer is \n");
    printbits(a);

    a=a&(~(-1<<(n)));

    printf("\n Bits of your integer after Xtacting \n");
    printbits(a);
}


