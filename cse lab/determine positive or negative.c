#include<stdio.h>

int main()
{
    int n,s=sizeof(s)*8;
    scanf("%d",&n);
    if(((n>>(s-1))<<(s-1))==0)
        printf("POSITIVE.");
    else
        printf("NEGATIVE.");
    return 0;
}
