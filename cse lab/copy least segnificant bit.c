#include<stdio.h>
void printbits(int n)
{
    int m=1;
    int i;
    printf("Bits of the integer is ");
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
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printbits(n);
    printf("\n now your number is %d\n",(n<<31)>>31);
    printbits((n<<31)>>31);
    return 0;
}
