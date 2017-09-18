#include<stdio.h>
void myputs(char *p)
{
    while(*p)
        printf("%c",*p++);
    printf("\n");
}
int main()
{
    myputs("this is myputs");
    printf("%d",sizeof(int *));
    return 0;
}
