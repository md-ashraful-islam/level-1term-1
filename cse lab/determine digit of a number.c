#include<stdio.h>
int digit(int n)
{
    if(n<10) return 1;
    return 1+digit(n/10);
}
int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    printf("The total digit of that number is %d",digit(n));
    return 0;
}
