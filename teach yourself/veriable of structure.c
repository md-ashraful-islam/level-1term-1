#include<stdio.h>

int main()
{
    int i;
    struct type{
        int i;
        double d;
    }t;
    i=10;
    t.i=20;
    t.d=20.55;

    printf("%d\n%d\n%G\n",i,t.i,t.d);
    return 0;
}
