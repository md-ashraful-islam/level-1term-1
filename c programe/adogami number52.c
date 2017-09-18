#include<stdio.h>
int main()
{
    int i;
    for(i=999;i>=0;i--)
    {
        printf("%d",i+1);
        if(i%5==0)
        {
            printf("\n");
        }
        else
        {
            printf("\t");
        }
    }
    return 0;
}
