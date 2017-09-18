#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    int i,t,k;
    double j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        j=sqrt(n);
        k=(int) j;
        if(n==k*k)
        {
            printf("YES");
        }
        else
        {
           printf("NO");
        }
        if(i!=n)
        {
            printf("\n");
        }
    }
    return 0;
}
