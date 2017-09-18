#include<stdio.h>
int main()
{
    int t,z,n,i,k,c1,c2,c3;
    scanf("%d",&t);
    for(z=1;z<=t;z++)
    {
        c1=0;
        c2=0;
        c3=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            k=i;
            while(k>1)
            {
                if(k%10==0)
                {
                    c1++;
                    k=k/10;
                }
                else if(k%5==0)
                {
                    c2++;
                    k=k/5;
                }
                else if(k%2==0)
                {
                    c3++;
                    k=k/2;
                }
                else
                {
                    break;
                }
            }

        }
        if(c2<c3)
        {
            printf("%d",(c1+c2));
        }
        if(c2>c3)
        {
            printf("%d",(c1+c3));
        }
           printf("\n");

    }
    return 0;
}
