#include<stdio.h>

int main()
{
    int n,i,s=sizeof(s)*8;
    scanf("%d",&n);
    i=(n>>(s-1));
    n=n^i+i;
    printf("The ABSOLUTE value is: %d",n);
    return 0;
}
