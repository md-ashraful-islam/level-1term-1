#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i=0;
    time_t t;
    srand((unsigned) time(&t));

    for(;i<5;i++)
    {
        printf("%d\n",rand()%6+1);
    }

    return 0;
}
