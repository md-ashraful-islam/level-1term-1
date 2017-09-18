#include<stdio.h>

struct type{
    int i;
    double j;
};

void func(struct type temp)
{
    printf("%d\n%G",temp.i,temp.j);
}

int main()
{
    struct type ver;

    ver.i=50;
    ver.j=100.55;

    func(ver);

    return 0;
}
