#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int (*x)[10];
    int i=0;
//    for(i=0;i<10;i++)
    x=new int [20];
    if(x==NULL)
        printf("Memory Allocation is field.");
    x[2][3]=10;
    x[7][9]=20;
    printf("%d\n",*(*(x+2)+3));
    printf("%d\n",*(*(x+7)+9));
    printf("%d\n",x[7][9]);
    return  0;
}


