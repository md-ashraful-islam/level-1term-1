#include<stdio.h>

struct s1{
    int n;
    double d;
    char c;
}p;

struct s2{
    char c;
    int n;
    double d;
}q;
int main()
{
    printf("char size: %lu bytes\n",sizeof(char));
    printf("int size: %lu bytes\n",sizeof(int));
    printf("double size: %lu bytes\n",sizeof(double));


    printf("s1 size: %lu bytes\n",sizeof(p));
    printf("s2 size: %lu bytes\n",sizeof(q));
    return 0;
}
