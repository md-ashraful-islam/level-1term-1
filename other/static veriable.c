#include<stdio.h>
int a=0,b=1;

int funct1(int);
int funct2(int);

int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        b+=funct1(a+1)+1;
        printf("%d\n",b);
    }
    return 0;
}

int funct1(int a)
{
    b=funct2(a+1)+1;
    return b;
}

int funct2(int a)
{
    static int p=1;
    p++;
    return a+b+p;
}
