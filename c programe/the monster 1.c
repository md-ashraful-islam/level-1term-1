#include<stdio.h>
#include<math.h>
int eo(int b,int a)
{
    if(((b+2*a)%2!=0) && ((b+a)%2!=0))
    {
        return 1;
    }
    return 0;
}
int main()
{
    int i,a,b,c,d;
    scanf("%d%d",&a,&b);
    scanf("%d%d",&c,&d);
    if((eo(b,a)==1 && eo(d,c)==0) || (eo(b,a)==0 && eo(d,c)==1))
    {
        printf("-1");
        return 0;
    }
    else
    {
        for(i=b;i<10000000;i=i+a)
        {
            if((i-d)%c==0)
            {
                printf("%d",i);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}

