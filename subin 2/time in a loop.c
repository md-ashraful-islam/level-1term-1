#include<stdio.h>
#include<time.h>

int main()
{
    int i,a,b=20;
    clock_t st,et;
    double t;

    st=clock();
    for(i=0;i<100000;i++)
        a=b/10+b*2;
//        printf("it calculate time.\n");

    et=clock();

    t=(double)(et-st)/(CLOCKS_PER_SEC);

    printf("\n\nTime: %lf\n",t);
    return 0;
}
