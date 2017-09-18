#include<stdio.h>

void matchbits(int x,int y)
{
    int s=sizeof(x)*8;

    int i;
    for(i=0;i<s;i++)
    {
        if((x&(1<<i))==(y&(1<<i)))
            printf("%d\n",i+1);
    }
}

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    matchbits(x,y);
    return 0;
}
