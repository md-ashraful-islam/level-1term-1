#include<stdio.h>

int main()
{
    char u, v = 'A';
    char *pu, *pv = &v;
    char str[10];
    *pv=v + 1;
    u=*pv+1;
    pu =pv;
    pu=&u;

    read(0,str,10);
    write(1,str,10);

    printf("\n%s\n",str);

    printf("%c\n",*pv);
    printf("%c",*pu);
}
