#include<stdio.h>

int main()
{
    int i;
    for(i=2;i<101;i++)
        printf("%-10d %-10d %-10d\n",i,i*i,i*i*i);
    return 0;
}
