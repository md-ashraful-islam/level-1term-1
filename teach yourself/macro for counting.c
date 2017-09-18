#include<stdio.h>

#define MAX 50
#define COUNTBY 3

int main()
{
    int i=COUNTBY;
    while(MAX>i)
    {
        printf("%d\t",i);
        i+=COUNTBY;
    }
    return 0;
}
