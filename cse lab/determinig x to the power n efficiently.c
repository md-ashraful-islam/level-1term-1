#include<stdio.h>
int powereven(int x,int n)
{
    if(n==2) return x*x;
    return x*x*powereven(x,n-2);
}
int powerodd(int x,int n)
{
    if(n==1) return x;
    return x*x*powerodd(x,n-2);
}
int main()
{
    int x,n;
    printf("Enter your number: ");
    scanf("%d",&x);
    printf("Enter your power: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("Result is %d",powereven(x,n));
    else
        printf("Result is %d",powerodd(x,n));
    return 0;
}

