#include<stdio.h>

int prime(int n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    int i;
    for(i=3;i<n/2;i+=2)
        if(n%i==0)
            return 0;
    return 1;
}

int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    int i,j,k;
    i=n;j=0;
    for(k=1;i>j;k++)
    {
        if(prime(i) && prime(j))
        {
            break;
        }

        i--;
        j++;
    }
    if(i<j)
        printf("NO");
    else
        printf("Yes");

    return 0;
}
