#include<stdio.h>
int main()
{
    int **mp,*p,i;
    p=&i;
    mp=&p;
    **mp=10;
    printf("%p\n",&mp);
    printf("%p\n",&p);
    printf("%p\n",&i);

}
