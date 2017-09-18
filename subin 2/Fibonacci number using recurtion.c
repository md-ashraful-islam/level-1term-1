#include<stdio.h>
int fibo(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int a,i;
    printf("Enter number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d\n",fibo(i));
    }
    return 0;
}
