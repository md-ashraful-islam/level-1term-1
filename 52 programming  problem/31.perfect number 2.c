#include<stdio.h>
#include<math.h>


int main()
{
    register int i,j;
    int a[10]={0},count=0,start=4;
    int t,n,b,k;
    float sr;
    scanf("%d",&t);

    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        for(i=4;i<n;i+=2)
        {
            b=0;
            sr=i;
            for(j=2;j<sr;j++)
            {
                if(i%j==0)
                {
                    b+=(j+i/j);
                    sr=i/j;
                }

            }
            b++;
            if(b==i)
                printf("%d\n",b);
        }
        if(k<t-1)
            printf("\n");
    }
    return 0;
}
