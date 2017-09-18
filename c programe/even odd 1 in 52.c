#include<stdio.h>
int main()
{
    int T,i,n;
    printf("enter your number:");
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        printf("enter number:");
        scanf("%d",&n);
        if(n==0 || n%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
        printf("\n");
    }
    return 0;
}
