
#include<stdio.h>
int main()
{
    int (*x)[10];
    int i=0;
//    for(i=0;i<10;i++)
    x=(int *)malloc(20*sizeof(int)*10);
    if(x==NULL)
        printf("Memory Allocation is field.");
    x[2][3]=10;
    x[9][19]=30;
    printf("%d\n",*(*(x+2)+3));
    printf("%d\n",*(*(x+9)+19));
    printf("%d\n",x[9][19]);
    return  0;
}
