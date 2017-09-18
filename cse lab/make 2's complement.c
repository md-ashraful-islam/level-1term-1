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
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("Bits of the integer is \n\n");
    printbits(a);
    printf("\n\nBits of the negative integer is \n\n");
    printbits(~a+1);
}
