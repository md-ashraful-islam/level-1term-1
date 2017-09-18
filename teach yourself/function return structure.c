#include<stdio.h>

struct type{
    int i;
    double j;
};

struct type func(void)
{
    struct type temp;

    temp.i=50;
    temp.j=52.544;

    return temp;
}

int main()
{
    struct type ver1;
    ver1=func();

    printf("%d\n%G",ver1.i,ver1.j);

    return 0;
}
