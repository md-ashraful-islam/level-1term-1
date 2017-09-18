#include<stdio.h>
struct {
    char ch;
    int n;
    char str[16];
}s;

union{
    char ch;
    int n;
    char str[16];
}u;
int main()
{
    printf("Size of structure: %d\n",sizeof(s));
    printf("Size of union %d",sizeof(u));
    return 0;
}
