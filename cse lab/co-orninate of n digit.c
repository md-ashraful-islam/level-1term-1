#include<stdio.h>
#include<stdarg.h>

void printPoint(int n,...)
{
    int i,j;
    va_list list;
    va_start(list,n);
    printf("(");
    for(i=0;i<n;i++)
    {
        j=va_arg(list,int);
        printf("%d",j);
        if(i!=n-1)
            printf(",");
    }
    va_end(list);
    printf(")");

}

int main()
{
    printPoint(3,5,3,3);
}
