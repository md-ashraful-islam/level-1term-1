#include<stdio.h>
int main()
int i,j,k,l,m,n;
int count(int n);
{
    for(i=0;i<10000;i++)
    {
        for(j=0;j<10;j++)
        {
            for(k=0;k<10;k++)
            {
                for(l=0;l<10;l++)
                {
                    for(m=0;m<10;m++)
                    {
                        int n=0;nn=1;nnn=2;nnnn=3;
                        if((j==count(n)) && (k==count(nn)) && (l==count(nnn)) && (m==count(nnnn)))
                        {
                            printf("%d%d%d%d\n",j,k,l,m);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
int count(int n)
{
    int p=0;
    if(j==n)
    {
        p++;
    }
    if(k==n)
    {
        p++;
    }
    if(l==n)
    {
        p++;
    }
    if(m==n)
    {
        p++;
    }
    return p;

}
