#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            k=i+j;
            if(k<=8)
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
        for(j=1;j<=7;j++)
        {
            k=-i+j;
            if(k<=1)
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
