#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a positive number: ");
    scanf("%d",&n);
    n=~n+1;
    printf("Negative of the positive number is: %d",n);
    return 0;
}
