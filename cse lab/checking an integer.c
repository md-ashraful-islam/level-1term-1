#include<stdio.h>

int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    if((a>>31)==0)
        printf("\nPOSITIVE\n");
    else
        printf("\nNEGATIVE\n");
    return 0;
}
