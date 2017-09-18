#include<stdio.h>
#include<stdarg.h>

double average(int cnt,...)
{
    int sum=0,n,i;
    va_list lst;
    va_start(lst,cnt);
    for(i=0;i<cnt;i++)
    {
        n=va_arg(lst,int);
        sum+=n;
    }
    va_end(lst);
    return sum/cnt;
}

int main()
{
    printf("AVERAGE: %lf",average(5,1,2,3,4,5));
}
