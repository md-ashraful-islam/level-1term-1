#include<stdio.h>

struct type{
    unsigned a:3;
    unsigned b:3;
    unsigned c:2;
};

int main()
{
    struct type t;

    t.a=5;
    t.b=6;
    t.c=3;

    printf("%u\n%u\n%d\n%d",t.a,t.b,t.c,sizeof(t));

    return 0;
}
