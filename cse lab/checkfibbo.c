#include<stdio.h>

int checkfibbo(int n)
{
    int n1=1,n2=1,t;
    while(n1<n)
    {
        t=n1;
        n1=n2;
        n2+=t;
        if((n1==n) || (n2==n))
            return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(checkfibbo(n))
        printf("Yes");
    else
        printf("No");
    return 0;
}
