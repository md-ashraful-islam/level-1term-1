#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    if((n& (n-1))==0)
        printf("YES.");
    else
        printf("NO");
    return 0;
}
