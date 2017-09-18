#include<stdio.h>
#include<time.h>

int i;

int main()
{
    clock_t t1,t2;
    int k;
    register int j;
    t1=clock();
    for(k=0;k<10000;k++)
        for(i=0;i<100000;i++);

    t2=clock();

    printf("Non register loop: %lf sec\n",(double) (t2-t1)/(CLOCKS_PER_SEC));


    t1=clock();
    for(k=0;k<10000;k++)
        for(j=0;j<100000;j++);

    t2=clock();

    printf("Register loop: %lf sec\n",(double) (t2-t1)/(CLOCKS_PER_SEC));

    return 0;
}
