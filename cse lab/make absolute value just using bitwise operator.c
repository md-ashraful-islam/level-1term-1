#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
//    a=a^(a>>31)-(a>>31);
    printf("\nABSOLUTE value of this number is %d \n",(a^(a>>31))-(a>>31));
    return 0;
}
