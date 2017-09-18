#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter the number you want to calculate factorial: ");
    scanf("%d",&n);
    printf("the factorial of your number is: %d.",fact(n));
    return 0;
}
