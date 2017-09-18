#include<stdio.h>
int main()
{
    int i,j,m;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=20;j++)
        {
            m=j-20+i;
            if(i>=j || (i>=m && m>0))
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
