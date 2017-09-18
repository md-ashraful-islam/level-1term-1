#include<stdio.h>

int main()
{
    int i,(*a)[2],*b[2];

    for(i=0;i<2;i++)
        *(b+i)=(int *)malloc(sizeof(int)*3);
    for(i=0;i<2;i++)
        scanf("%d %d %d\n",&b[i][0],&b[i][1],&b[i][2]);
    for(i=0;i<2;i++)
        printf("%d %d %d\n",b[i][0],b[i][1],b[i][2]);

    a=(int *)malloc(sizeof(int)*5);
    for(i=0;i<5;i++)
    {
        scanf("%d%d",&a[i][0],&a[i][1]);
    }

    for(i=0;i<5;i++)
    {
        printf("%d\t%d\n",a[i][0],a[i][1]);
    }
}
