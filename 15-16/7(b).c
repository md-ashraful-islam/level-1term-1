#include<stdio.h>

int main()
{
    union mytype{
        char c1;
        char c2;
        char c3;
        char c4;
        int i;
    };
    union mytype var;
    var.i=4096;
    printf("%d",var.c4);
}

