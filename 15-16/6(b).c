#include<stdio.h>
#include<stdarg.h>

int isPrime(int cnt,...)
{
    int n,i,j,c=0;
    va_list lst;
    va_start(lst,cnt);
    for(i=0;i<cnt;i++)
    {
        n=va_arg(lst,int);
        if(n==2)
            c++;
        else
        {
            for(j=3;j<n;j+=2)
            {
                if(n%j==0)
                    break;
            }
            if(j==n)
                c++;
        }

    }
    va_end(lst);
    return c;
}

int main()
{
    printf("%d",isPrime(5,2,1,29,5537437,3));
}
