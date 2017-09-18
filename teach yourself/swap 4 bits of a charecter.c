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
        if(i==16)
            printf(" ");
    }
}

int swap(int i)
{
    return ((~(-1<<4)&i)<<4)|(i>>4);
}

int main()
{
    int i;
    printf("Enter an integer (-128 to 127): ");
    scanf("%d",&i);

    printf("Before swap bit representation: ");
    printbit(i);

    i=swap(i);

    printf("\nAfter swap bit representation: ");
    printbit(i);

    return 0;

}
