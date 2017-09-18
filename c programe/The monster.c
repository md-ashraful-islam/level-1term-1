#include<stdio.h>

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
    int i,a,b,c,d,m=0;
    int j,k;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    if((eo(b,a)==1 && eo(d,c)==0) || (eo(b,a)==0 && eo(d,c)==1))
    {
        printf("-1");
        return 0;
    }
    else
    {
        for(i=0;;i++)
        {
            j=b+i*a;
            if(j<k)
            {
                continue;
            }
            else
            {
                for(;;m++)
                {
                    k=d+m*c;
                    if(k>j)
                    {
                        break;
                    }
                    else if(j==k)
                    {
                        printf("%d",k);
                        return 0;
                    }
                }
            }
        }
    }
}
