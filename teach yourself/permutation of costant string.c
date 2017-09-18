#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    char *p1="One",*p2="Two",*p3="Three",*p4;
    int i;
    for(i=1;i<=fact(3);i++)
    {
        printf(p1);
        printf(" ");
        printf(p2);
        printf(" ");
        printf(p3);
        printf("\n");
        if(i%2)
        {
            p4=p1;
            p1=p2;
            p2=p4;
        }
        else
        {
            p4=p3;
            p3=p2;
            p2=p4;
        }
    }
    return 0;
}
