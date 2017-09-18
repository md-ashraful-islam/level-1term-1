#include<stdio.h>
int digit(long int n)
{
    int i=0;
    while(n>0)
    {
        i++;
        n=n/10;
    }
    return i;
}
int main()
{
    long int n;
    scanf("%ld",&n);
    printf("%d",digit(n));
}
