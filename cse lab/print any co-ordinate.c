#include<stdio.h>
#include<stdarg.h>

void printpoint(int n,...)
{
    int i;
    int t;
    va_list list;
    va_start(list,n);
    printf("The co-ordinate of the point is (");
    for(i=0;i<n;i++)
    {
        t=va_arg(list,int);
        printf("%d",t);
        if(i<n-1)
            printf(",");
    }
    printf(")\n");
    va_end(list);
}

int main()
{
    printpoint(3,545,87,4564);
    printpoint(2,5,8);
    return 0;
}

