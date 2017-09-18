#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        i=0;
    }
    else
    {
        for(i=0;a<=b;i++)
        {
            a=a*3;
            b=b*2;
        }
    }
    printf("%d",i);
    return 0;
}
