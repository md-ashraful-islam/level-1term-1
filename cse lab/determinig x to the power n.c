#include<stdio.h>
int power(int x,int n)
{
    if(n==1) return x;
    return x*power(x,n-1);
}
int main()
{
    int x,n;
    printf("Enter your number: ");
    scanf("%d",&x);
    printf("Enter your power: ");
    scanf("%d",&n);
    printf("Result is %d",power(x,n));
    return 0;
}
