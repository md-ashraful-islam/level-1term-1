#include<stdio.h>
int main()
{
//    int a[4][3]={2,3,5,
//                0,1,2,
//                4,1,5,
//                2,3,7};
//    printf("%d",*(*(a+1)+1-1)-1);

    char (*x)[100];
    x=(char **)malloc(200*100);
    x[10][20]=10;
    x[199][99]=99;
//    x[199][299]=11;
//    x[399][799]=8;
    printf("%d\n",x[10][20]);
    printf("%d\n",x[199][99]);
//    printf("%d\n",x[199][299]);
//    printf("%d\n",x[399][799]);
}
