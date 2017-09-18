#include<stdio.h>
#include<string.h>

int main()
{
    register int i;
    int t,n,a,b;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        a=0;
        scanf("%d",&n);
        b=n;
        while(n>0)
        {
            a+=(n%10)*(n%10)*(n%10);
            n/=10;
        }

        if(a==b)
            printf("%d is an armstrong number!",b);
        else
            printf("%d is not an armstrong number!",b);


        if(i<t-1)
            printf("\n");
    }

    return 0;
}
