#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    int i=0;
    time_t t;
    srand(0);

    for(;i<5;i++)
    {
        printf("%d\n",rand());
    }

    return 0;
}
