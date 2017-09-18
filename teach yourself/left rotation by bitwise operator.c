#include<stdio.h>
#include<stdlib.h>

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

char leftrotation(int x)
{
    char i;
    i=(128&x)?1:0;
    return ((x<<1)| i);
}


int main()
{
    int ch;
    printf("Enter a integer(-128 to 127): ");
    scanf("%d",&ch);
    printf("Before left rotation bit representation is: \n");
    printbit(ch);
    ch=leftrotation(ch);
    printf("\nAfter left rotation bit representation is: \n");
    printbit(ch);

    return 0;
}
