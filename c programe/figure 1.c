#include<stdio.h>
int main()
{
    int i,j,m;
    for(i=0;i<=6;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(i<j)
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
    for(i=1;i<=6;i++)
    {
        m=7-i;
        for(j=1;j<=7;j++)
        {
            if(m<=j)
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
