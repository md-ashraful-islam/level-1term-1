#include<stdio.h>

int kSmooth(int x,int k)
{
    if(k<2) return 0;
    int i,j,maxprime=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            if(i==2)
                maxprime=2;
            else
            {
                for(j=3;j<i;j++)
                {
                    if(i%j==0)
                        break;
                }
                if(i==j)
                    maxprime=i;
            }
        }
    }
    if(k>=maxprime)
        return 1;
    return 0;
}

int main()
{
    printf("%d",kSmooth(3,24));
    return 0;
}
