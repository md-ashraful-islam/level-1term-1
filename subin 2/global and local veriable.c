#include<stdio.h>

int a=10;
int ara[10];
//when we declare an variable outside the main function
//it automatically initialize by zero(0)

void myfunc(int a)
{
    printf("myfunc,a=%d\n",a);
}

int main()
{
    int a=5,i;
    myfunc(20);
    printf("main,a=%d",a);
    for(i=0;i<10;i++)
        printf("%d\t",ara[i]);

    return 0;
}

