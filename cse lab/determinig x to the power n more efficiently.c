#include<stdio.h>
int power(int x,int n)
{
    if(n==0) return 1;
    else if(n%2==0)
        return power(x*x,n/2);
    return x*power(x*x,(n-1)/2);
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
