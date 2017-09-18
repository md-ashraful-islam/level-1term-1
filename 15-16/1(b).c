#include<stdio.h>

int main()
{
    int n,d,count=0;
    printf("please enter a number: ");
    scanf("%d",&n);
    printf("Please enter digit: ");
    scanf("%d",&d);
    while(n>0)
    {
        if((n%10)==d)
            count++;
        n/=10;
    }

    printf("COUNT: %d",count);
    return 0;
}
