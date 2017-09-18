#include<stdio.h>
int main()
{
    void *p;
    int a=10;
    *((int *)p)=a;
    printf("%d",p);
}
