#include<stdio.h>
#include<stdlib.h>

int comfunc(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}

int main()
{
    int n,i;
    printf("Please enter Array size: ");
    scanf("%d",&n);
    int *ara;
    ara=(int *)malloc(sizeof(int)*n);
    printf("Enter Array's element: ");
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    qsort((void *)ara,n,sizeof(int),comfunc);
    printf("Sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d\t",ara[i]);
    free(ara);
    return 0;
}
