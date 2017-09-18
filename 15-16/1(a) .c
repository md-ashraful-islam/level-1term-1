#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum=0;

    for(i=1;i<2*n;i+=2)
        sum+=i;

    printf("%d",sum);
    return 0;
}
