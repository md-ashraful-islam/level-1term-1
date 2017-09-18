#include<stdio.h>
void plus_ten1(int a)
{
    a+=10;
}

void plus_ten2(int *a)
{
    (*a)+=10;
}

int main()
{
    int a=5;

    plus_ten1(a);
    printf("%d\n",a);

    plus_ten2(&a);
    printf("%d",a);
    return 0;
}
