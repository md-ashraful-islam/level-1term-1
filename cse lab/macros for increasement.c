#include<stdio.h>
#define increment(p) p++
int main()
{
    int x;
    printf("Please enter a number: ");
    scanf("%d",&x);
    increment(x);
    printf("The increment value is %d",x);
    return 0;
}
