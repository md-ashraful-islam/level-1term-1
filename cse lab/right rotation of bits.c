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
    int s=sizeof(s)*8;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("Enter number of rotation: ");
    scanf("%d",&n);
    printf("\n Bits of your integer is \n");
    printbits(a);

    for(;n>0;n--)
        a=((a>>1)&(~(1<<s-1)))|(a<<s-1);

    printf("\n Bits of your integer after right circular shift is \n");
    printbits(a);
}

