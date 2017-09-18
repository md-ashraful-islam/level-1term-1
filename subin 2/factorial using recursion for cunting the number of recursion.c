#include<stdio.h>
int count=0;
int fact(int n)
{
    count++;
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Factorial of that number is %d.\n",fact(n));
    printf("The number of executing function is %d.",count);
    return 0;
}
