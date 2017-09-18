#include<stdio.h>

void printbit(int x)
{
    int i;
    for(i=128;i>0;i=i>>1)
    {
        if(i&x)
            printf("1");
        else
            printf("0");
    }
}

int main()
{
    char ch1,ch2;
    printf("Enter two character: ");
    scanf("%c%c",&ch1,&ch2);
    int i,mask=1;

    printf("\n\n");
    printbit(ch1);
    printf("\n");
    printbit(ch2);
    printf("\n\n");


    for(i=0;i<8;i++)
    {
        if((ch1&mask) == (ch2&mask))
            printf("Bit match in %d\n",i);
        mask<<=1;
    }
    return 0;
}
