#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=11;j++)
        {
            k=j-11+i;
            if(j>i && k<=0)
            {
                printf("c");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=4;i>=0;i--)
    {
        for(j=1;j<=11;j++)
        {
            k=j-11+i;
            if(j>i && k<=0)
            {
                printf("c");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
