#include<stdio.h>
void check(int n)
{
    int m=1,i;
    for(i=sizeof(n)*8-1;i>=0;i--)
    {
        if(((n>>i)&m)==1)
            break;
    }
    for(i--;i>=0;i--)
    {
        if(((n-1>>i)&m)==0)
        {
            printf("This is not power of 2");
            return;
        }
    }
    printf("This is power of 2");
    return;
}
int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    check(a);
    return 0;
}
