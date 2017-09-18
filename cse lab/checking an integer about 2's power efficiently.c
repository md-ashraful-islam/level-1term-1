#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if((n&(n-1))==0)
        printf("This is power of 2");
    else
        printf("This is not power of 2");
    return 0;
}
