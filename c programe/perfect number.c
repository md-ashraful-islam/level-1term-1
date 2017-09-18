#include<stdio.h>
int main()
{
    int i,j,sum=0;
    for(j=1;j<=10000;j++)
    {
        sum=0;
        for(i=1;i<j;i++)
        {
            if(j%i==0)
            {
                sum=sum+i;
            }
        }
        if(j==1)
        {
            printf("%d\n",j);
        }
        else if(j==sum)
        {
            printf("%d\n",j);
        }
    }
    return 0;
}
