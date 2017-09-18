#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a positive number: ");
    scanf("%d",&n);
    printf("reset %d\n",n&0);
    printf("set %d",n|(-1));
    return 0;

}
