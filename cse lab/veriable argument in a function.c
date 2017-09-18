#include<stdio.h>
#include<stdarg.h>

float average(int count,...)
{
    int i,n[count];
    float avr=0;
    va_list list;
    va_start(list,count);
    for(i=0;i<count;i++)
    {
        n[i]=va_arg(list,int);
        avr+=n[i];
        printf("%d ",n[i]);
    }
    avr/=count;
    va_end(list);
    printf("\n");
    return avr;
}

int main()
{
    printf("%f\n",average(8,45,5,54,5,545,45,45,45));
    printf("%f\n",average(7,45,5,54,5,545,45,45));
    printf("%f\n",average(5,45,5,54,5,545));
    printf("%f\n",average(2,45,45));
}
