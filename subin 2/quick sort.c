#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
    return (-*(int *)a+*(int *)b);
}


int main()
{
    int i,a[5]={2,-200,855,97,5};

    qsort(a,5,sizeof(int),compare);

    for(i=0;i<5;i++)
        printf("%d\t",a[i]);

    return 0;
}
